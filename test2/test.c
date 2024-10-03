#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "types.h"


int predict_read;
int predict_write;
int update_read;


typedef struct {
  __uint64_t ip;
  __uint64_t target;
  __uint8_t taken;
  __uint8_t branch_type;
}  BranchUpdateInfo;

// Be aware of little endian encoding vs big endian
__uint64_t to_long(const unsigned char* charArray){
  __uint64_t result = 0;
  for(int i = 7; i >= 0; i--){
    result = (result << 8) | charArray[i];
  }
  return result;
}

void set_file_descriptors(){
  const char* fd_in = getenv(ENV_FIFO_IN);
  const char* fd_out = getenv(ENV_FIFO_OUT);
  const char* fd_update = getenv(ENV_FIFO_UPDATE);
  predict_read = atoi(fd_in);
  predict_write = atoi(fd_out);
  update_read = atoi(fd_update);
}


__uint64_t branch_pred_req(){
  
  unsigned char buff[8];
  int num = 0;
  __uint64_t ip = 0;
  sleep(1);
  if((num = read(predict_read, buff, 8)) > 0){
    ip = to_long(buff);
    //printf("Bluespec IP: %ld\n", ip);
  }
  return ip;
}

void branch_update_req(unsigned int* res){
  // Careful about padding
  unsigned char buff[18];
  int num = 0;
  
  BranchUpdateInfo ret;
  if((num = read(update_read, buff, 18)) > 0) {
      // Decode
      ret.ip = to_long(buff);
      ret.target = to_long(&buff[8]);
      ret.taken = buff[16] - '0';
      ret.branch_type = buff[17] - '0';
      
      // For Bluespec
      res[0] = ret.ip & 0xFFFFFFFF;
      res[1] = (ret.ip & 0xFFFFFFFF00000000) >> 32;
      res[2] = ret.target & 0xFFFFFFFF;
      res[3] = (ret.target & 0xFFFFFFFF00000000) >> 32;
      res[4] = (ret.branch_type << 8) | ret.taken;
  }else{
    perror("Receiving update");
    exit(1);
  }
}

void branch_pred_resp(char taken){
  taken = taken + '0'; // Char form
  write(predict_write, &taken, 1);
}

void debug(){
  printf("Debug\n");
}
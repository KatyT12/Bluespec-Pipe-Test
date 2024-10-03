#include <map>
#include <iostream>
#include "msl/fwcounter.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "ooo_cpu.h"

#define SCRIPT_LOCATION "/home/katy/C++/pipe/test2/Build/script.sh"
#define ENV_FIFO_IN "IN"
#define ENV_FIFO_OUT "OUT"
#define ENV_FIFO_UPDATE "UPDATE"

void init_bsim();

namespace
{
    int pred_req[2];
    int pred_resp[2];
    int update_req[2];
} // namespace



void O3_CPU::initialize_branch_predictor() {
  init_bsim();
}

uint8_t O3_CPU::predict_branch(uint64_t ip)
{
   char out = 0;
   std::cout << ip << std::endl;
   if(write(pred_req[1], &ip, 8) == -1){
     perror("Requesting prediction");
   }
  
    
   if(read(pred_resp[0], &out, 1) > 0){
     return out - '0';
   }else{
     perror("Recieving prediction");
   }
   
}

// Only for numerical types
template<typename T>
void contiguous_buff(T val, unsigned char* buff, int buff_size, int start){
    int val_size = sizeof(val);
    T mask = 0xFF;
    while(val_size > 0){
        buff[start] = val & mask; 
        val >>= 8; val_size -= 4;
        start++;
    }
}

void O3_CPU::last_branch_result(uint64_t ip, uint64_t branch_target, uint8_t taken, uint8_t branch_type)
{
    std::cout << ip << " " << branch_target << " " << taken << " " << branch_type << std::endl;
    unsigned char buff[18];
    contiguous_buff<uint64_t>(ip, buff, 18, 0);
    contiguous_buff<uint64_t>(target, buff, 18, 8);
    buff[16] = taken + '0';
    buff[17] = branch_type + '0';
    if(write(update_req[1], &buff, 18) == -1){
     perror("Requesting update");
   }
    return;
}


void init_bsim(){
  pid_t pid;

  if(pipe(::pred_req) < 0) exit(1);
  if(pipe(::pred_resp) < 0) exit(1);
  if(pipe(::update_req) < 0) exit(1);

  pid = fork();
  if(pid == -1){
    perror("Fork");
    exit(EXIT_FAILURE);
  }

  if(pid == 0){
    char run[] = SCRIPT_LOCATION;
    char* args[] = {run, NULL};
    char pred_in_arg[20], pred_out_arg[20], update_arg[20];

    
    sprintf(pred_in_arg, "%s=%d", ENV_FIFO_IN, pred_req[0]);
    sprintf(pred_out_arg, "%s=%d", ENV_FIFO_OUT, pred_resp[1]);
    sprintf(update_arg, "%s=%d", ENV_FIFO_UPDATE, update_req[0]);
    char* env[] = {pred_in_arg, pred_out_arg, update_arg, NULL};

    execve(run, args, env);
    perror("execve");
    exit(EXIT_FAILURE);
  }
  std::cout << "Completed init\n";
}
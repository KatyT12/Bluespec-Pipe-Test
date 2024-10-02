#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "types.h"




void my_display(unsigned char x)
{
  const char* fd = getenv(ENV_FIFO_IN);
  int pipe_rd = atoi(fd);
  char buff[20];
  printf("Num %d, env = %s\n",x, fd);

  int num = 9;
  if((num = read(pipe_rd, buff, 20)) > 0){
    printf("%s\n", buff);
  }else{
    printf("Done\n");
  }
}



unsigned char my_and(unsigned char x, unsigned char y)
{
  return (x & y);
}

unsigned char my_C_or(unsigned char x, unsigned char y)
{
  return (x | y);
}


unsigned char get_input(){
  unsigned char ret;
  scanf("%hhu", &ret);
  //printf("", ret)
  return ret;
}

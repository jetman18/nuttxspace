
#include <nuttx/config.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

volatile static int k;

int tuannd309_main(int argc, FAR char *argv[])
{
  while(1){
      printf("call from tuannd309\n");
      usleep(1000000);
}
  return 0;
}



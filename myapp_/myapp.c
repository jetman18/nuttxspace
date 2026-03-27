
#include <nuttx/config.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

volatile static int k;

int myapp_main(int argc, FAR char *argv[])
{
  while(1){
      printf("hello\n");
      usleep(1000000);
}
  return 0;
}



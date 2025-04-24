#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main(){
  char buff[24];
  int fd;
  int val1,val2;
  fd = open("master.txt",0,O_RDONLY);
  val1 = read(fd,buff,24);
  val2 = write(1,buff,24);
  if(val1 < 0 || val2 < 0){
    perror("");
    exit(1);
    }
  close(fd);
 }

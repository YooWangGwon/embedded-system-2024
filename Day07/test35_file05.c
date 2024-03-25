// file : test35_file05.c
// date : 240325
// desc : 리눅스로 파일 생성 및 쓰고읽기

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void error_handling(char* msg);

int main(void)
{
  int fd;
  int fd1;
  int cp;

  char buf[] = "TomCruise Wonderful Day\n";

  char buf2[1024];
  fd = open("Tom.txt", O_CREAT|O_WRONLY|O_TRUNC, 0600);
  if(fd == -1)
    error_handling("open() error!");
  printf("file descriptor: %d \n", fd);
  printf("write data : %s\n", buf);
  printf("strlen(buf): %d\n", strlen(buf));
  if(write(fd, buf, strlen(buf)) == -1)
    error_handling("write() error!");

  close(fd);

  fd1 = open("Tom.txt", O_RDONLY);
  if(fd1 == -1)
    error_handling("open() error!");
  printf("file descriptor: %d \n", fd1);

  if(read(fd1, buf2, 1024) == -1)
    error_handling("read() error!");
  printf("file data : %s\n", buf2);      // 잘 읽었는지 확인하기

  close(fd1);

  cp = open("Tomcopy.txt", O_CREAT|O_WRONLY|O_TRUNC, 0600);
  if(cp == -1)
    error_handling("open() error!");
  printf("file descriptor: %d \n", cp);

  printf("strlen(buf2):%d\n",strlen(buf2));
  printf("sizeof(buf2):%d\n",sizeof(buf2));

  if(write(cp, buf2, strlen(buf2)) == -1)
    error_handling("write() error!");

  close(cp);
  return 0;
}

void error_handling(char* msg)
{
  fputs(msg, stderr);
  fputc('\n', stderr);
  exit(1);
}

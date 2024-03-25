// file : test32_low_read.c
// date : 240320
// desc : 파일에 저장된 데이터 읽기

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#define BUF_SIZE 100
void error_handling(char* message);

int main(void)
{
  int fd;
  char buf[BUF_SIZE];

  fd = open("data.txt", O_RDONLY);  // data.txt 파일을 읽기 전용으로 열기
  if(fd == -1)
    error_handling("open() error!");
  printf("file descriptor:%d\n",fd);

  if(read(fd, buf, sizeof(buf))==-1)  // read함수를 이용해서 15행에 선언된 배열 buf에 읽어 들인 데이터를 저장
    error_handling("read() error!");
  printf("file data:%s",buf);
  close(fd);
  return 0;
}

void error_handling(char* message)
{
  fputs(message, stderr); // stderr(표준에러출력장치, 일반적으로 모니터)에 문자열 message 입력
  fputc('\n',stderr);
  exit(1);
}

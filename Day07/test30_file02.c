// file : test30_file02.c
// date : 240320
// desc : 리눅스 파일 만들기

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
  char msg[] = "Linux Test!!";
  int fd;

  fd = open("test02.txt", O_CREAT | O_WRONLY);  // O_CREAT : 파일이 존재하지 않으면 파일을 새로 만들어라
  if(fd == -1){                                 // O_WRONLY : 파일을 쓰기 전용으로 open한다.
    printf("file open error");
    exit(1); // 에러 발생으로 인한 강제종료
  }                                    // file descriptor : 프로세스에서 특정 파일에 접근할 때 사용하는 추상적인 값
  printf("file descriptor: %d\n", fd); // 3 : 0, 1, 2는 운영체제에서 사용하기 때문에 파일 디스크립터는 3번부터 할당된다.
                                       // file descriptor는 파일에 직접적으로 지정되어 있지않고 오픈할 때마다 지정됨
  if(write(fd, msg, sizeof(msg))==-1){
    printf("file write error");
  }
  close(fd);
}

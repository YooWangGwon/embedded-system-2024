// file : test34_file04.c
// date : 240320
// desc : 표준입출력함수로 파일생성

#include <stdio.h>
#include <stdlib.h>

void main()
{
  char myinfo[100] = "YooWangGwon";
  char msg[100];
  FILE* fd1;
  FILE* fd2;

  fd1 = fopen("YWG.txt","rw");
  if(fd1 == NULL)
  {
    fprintf(stderr, "ERROR1");
    exit(1);
  }

  fprintf(fd1, "%s", myinfo);

  fd2 = fopen("YWGcopy.txt","w");
  if(fd2 == NULL)
  {
    fprintf(stderr, "ERROR2");
    exit(1);
  }

  fscanf(fd1, "%s", msg);
  printf("%s\n",msg);
  fprintf(fd2, "%s", msg);

  fclose(fd1);

  fclose(fd2);
}


// file : test33_file03.c
// date : 240320
// desc : 표준 파일 입출력

#include <stdio.h>
#include <stdlib.h>

void main()
{
  char msg[100];
  FILE* fp;
  if((fp = fopen("test.txt","r")) == NULL){
    fprintf(stderr, "ERROR"); // 파일이 오픈되지 않으면 표준에러출력(모니터)에 "ERROR출력"
    exit(1);
  }
  fscanf(fp, "%s", msg); // "test.txt"에 있는 문자열을 읽어와서 msg에 저장
  printf("%s\n", msg);

  fclose(fp);
}
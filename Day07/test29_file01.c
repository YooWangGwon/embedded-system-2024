// file : test29_file01.c
// date : 240320
// desc : 표준입출력함수 파일 오픈
#include <stdio.h>
#include <stdlib.h>

void main()
{
  char msg[20] = "File Test!!";
  char myinfo[] = "이름:유왕권\n나이:25\n거주지:부산\n";


  FILE* fp; // 파일 포인터
  fp = fopen("test.txt", "w"); // fopen: 표준입출력함수에서 파일을 여는 함수, "w"는 옵션
                               // 파일을 연 주소를 리턴받음
                               // w : 쓰기 r : 읽기 rw : 읽고 쓰기
  if(fp == NULL)  // 파일 열기를 실패할 경우
  {
    fprintf(stderr, "Error"); // stderr(표준오류) : 에러를 위한 스트림
    exit(1);                  // fprintf : 표준 파일 출력함수. 스트림에 문자열을 출력(저장)하는 함수
  }
  fprintf(fp, "%s\n%s", msg, myinfo); // 파일에 쓰기
  printf("%s", msg);
  // printf("file descriptor: %d\n", fp); // fp는 파일 포인터이기 때문

  fclose(fp);   // 파일 닫기
}
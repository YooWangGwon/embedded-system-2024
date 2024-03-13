// file : test10_Training01.c
// date : 240313
// desc : 실습 예제

#include <stdio.h>

void main()
{
  char name[20];
  int age;
  printf("이름을 입력하시오.");
  scanf("%s",name);
  printf("나이를 입력하시오.");
  scanf("%d",&age);

  printf("이름:%s, 나이:%d\n", name, age);

  printf("나이를 입력하시오.");
  scanf("%d",&age);
  printf("이름을 입력하시오.");
  scanf("%s",name);
  printf("이름:%s, 나이:%d\n", name, age);
}

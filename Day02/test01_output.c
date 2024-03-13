// file : test01_output.c
// date : 240313
// desc : printf 출력

#include <stdio.h>

void main()
{
  printf("%d\n",35);     // 정수출력
  printf("%d\n",0123);   // 8진임 : 앞에 0이 붙음
  printf("%d\n",0xACC);  // 16진수 : 앞에 0x가 붙음
  printf("%f\n",3.14);   // 실수 출력

  printf("int:%d\n",sizeof(int)); // 정수형의 크기
  printf("float:%d\n",sizeof(float)); // 실수형의 크기
  printf("double:%d\n",sizeof(double));

  printf("%c\n",'A');
  printf("%d\n",'A'); // 대문자 A의 ASCII 코드 : 65
  printf("%d\n",'a'); // 소문자 a의 ASCII 코드 : 97
  printf("%c\n",97);  // ASCII 코드를 이용하여 a 출력

  printf("%s\n","RasberryPi OS!!");
}

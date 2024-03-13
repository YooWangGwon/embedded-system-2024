// file : test03_func01.c
// date : 240313
// desc : 함수1

#include <stdio.h>

void func() // 함수정의:C에서는 멤버함수 전역함수 구분이 없다.
{
  printf("func()\n");
}

void func1();

void main()
{
  func();   // 함수 호출
  func1();  // 밑에 정의한 함수를 위에서 호출할 경우
            // 위에 함수 선언이 없다면 warning 발생!
            // 위에 함수 선언이 있다면 정상 실행!
}

void func1()
{
  printf("func1()\n");
}

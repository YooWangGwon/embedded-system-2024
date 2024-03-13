// file : test05_const.c
// date : 240313
// desc : const 상수화

#include <stdio.h>

void main()
{
  const int i = 10; // 상수화된 값이기 때문에 변경 불가능
  printf("i: %d\n",i);
/*
  i = 20;
  printf("i: %d\n",i);

  int* pi = &i; // int*는 warning 문구 발생
  printf("*pi: %d\n", *pi);
*/
  const int* pi2 = &i;  // const int*는 warning 문구 발생 안함
  printf("*pi: %d\n",*pi2);

  *pi2 = 20;          // error 발생
}

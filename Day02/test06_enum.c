// file : test06_enum.c
// date : 240313
// desc : enum 열거형

#include <stdio.h>
// 열거형

void main()
{
  enum season {SPRING=5, SUMMER, FALL, WINTER} s;
  // 첫번째 값에 부여한 숫자에 따라 나머지 값들의 숫자가 결정됨
  s = SPRING;
  printf("%d\n", s);

  s = WINTER;
  printf("%d\n", s);

}

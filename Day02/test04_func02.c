// file : test04_func02.c
// date : 240313
// desc : 함수2

#include <stdio.h>

int Sumf(int a, int b)
{
  return a+b;
}

int Minf(int a, int b)
{
  return a-b;
}

void main()
{
  printf("더한값은 %d이고 ",Sumf(10,20));
  printf("뺀 값은  %d입니다\n",Minf(20,10));
  printf("더한 값은 %d이고 뺀 값은 %d입니다.\n",Sumf(10,20),Minf(20,10) );
}


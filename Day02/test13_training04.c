// file : test13_training04.c
// date : 240313
// desc : 실습예제 4

#include <stdio.h>

void main()
{
  for(int i = 0; i<5; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  int num;
  printf("피라미드 층수를 입력하시오 >> ");
  scanf("%d",&num);

  for(int i = 0; i<num; i++)
  {
    for(int a = 0; a<(num-i-1); a++)
    {
      printf(" ");
    }
    for(int j = 0; j<(2*i+1); j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

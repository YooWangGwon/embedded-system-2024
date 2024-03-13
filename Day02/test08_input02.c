// file : test08_input02.c
// date : 240313
// desc : 입력 2

#include <stdio.h>

void Comparison(int a, int b)
{
  if(a > b)
  {
  printf("%d가 %d보다 큽니다.\n",a,b);
  }
  else if(a<b)
  {
  printf("%d가 %d보다 큽니다.\n",b,a);
  }
  else if(a==b)
  {
    printf("두개의 값이 같습니다.\n");
  }
}

void main()
{
  int a;
  int b;
  int result;
  printf("2개의 정수를 입력하세요: ");
  scanf("%d %d", &a, &b);

  Comparison(a,b);

  result =  ( a > b )? a : b;
  printf("둘 중에 더 큰 수는 %d 입니다.\n",result);
}

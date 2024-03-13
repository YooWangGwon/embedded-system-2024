// file : test11_training02.c
// date : 240313
// desc : 실습예제2

# include <stdio.h>

void add(int a, int b)
{
  printf("%d\n",a+b);
}

void min(int a, int b)
{
  printf("%d\n",a-b);
}

void multi(int a, int b)
{
  printf("%d\n",a*b);
}

void div(int a, int b)
{
  printf("%d\n",a/b);
}

int main()
{
  int a, b;
  char c;
  printf("두 정수와 연산자를 입력하시오. : ");
  scanf("%d %d",&a,&b);
  printf("연산자를 선택하시오.\n");
  scanf(" %c", &c);
  if (c=='+')
  {
  add(a, b);
  }
  else if (c=='-')
  {
  min(a, b);

// file : test20_stack02.c
// date : 240318
// desc : 스택 2

#include <stdio.h>
#define STACK_SZ 2

typedef struct STACK
{
  int buff[STACK_SZ];
  int top;
} stack;

stack createStack()
{
  stack s;  // stack 구조체 변수 s  선언
  s.top = -1;   // s의 멤버변수 top의 값을 -1로 초기화
  return s;     // stack 구조체 변수 s를 리턴
}

int isFull(stack*ST)
{
  if(ST->top==STACK_SZ-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void push(stack*ST, int data)
{
  if(isFull(ST))
  {
    printf("stack overflow\n");
    return;
  }

  ST->buff[++ST->top] = data;
  printf("%d번 스택에 %d을(를) push완료\n", ST->top, data);
}

int isEmpty(stack* ST)
{
  if(ST->top < 0)
  {
    return 1;
  }
  else return 0;
}

int pop(stack* ST)
{
  if(isEmpty(ST))
  {
    printf("stack underflow\n");
    return -1;
  }
  return ST->buff[ST->top--];
}

void main()
{
  stack st =createStack();
  //  stack*st = &mystack;


  printf("POP:%d\n",pop(&st));
  push(&st,10);
  push(&st,20);
  push(&st,30);
  printf("POP:%d\n",pop(&st));
  printf("POP:%d\n",pop(&st));
  printf("POP:%d\n",pop(&st));
}

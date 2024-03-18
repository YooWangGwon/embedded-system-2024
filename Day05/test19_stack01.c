// file : test19_stack01.c
// date : 240318
// desc : 스택 - 1

#include <stdio.h>
#define STACK_SZ 3
#define TRUE 1
#define FALSE 0

int stack[STACK_SZ]; // int타입의 자료를 100개 담을 수 있는 스택 배열 생성
int top = -1;

void push(int data);
int pop();
int isFull();
void searchStack(int data);

void main()
{
  push(3);
  push(5);
  push(10); // 오버플로우 발생여부를 확인하고 예외처리가 필요함
  push(12);

  searchStack(10);

  printf("%d\n",pop()); // pop을 통해 생긴 임시객체를 바로 출력
  printf("%d\n",pop());
}

int isFull()
{
  if(top == STACK_SZ - 1)
  {
    return TRUE;  // 1
  }
  else
  {
    return FALSE; // 0
  }
}

int isEmpty()
{
  if(top <= -1)   // 전기적인 충격에 의해 -1값이 변동되어도 TRUE값을 리턴할 [>
  {
    return TRUE;  // 1
  }
  else
  {
    return FALSE; // 0
  }
}

void push(int data)
{

//  if(top == STACK_SZ - 1)  // 오버플로우 발생시 호출함수로 되돌리기
  if(isFull())
  {
    printf("stack overflow!!\n");
    return;
  }
  stack[++top] = data; // 전달받은 데이터를 배열 stack에 대입
  printf("%d번 스택에 %d 삽입 성공\n", top, data);
  // return 0; //  정상적으로 리턴할 때
}

int pop()
{
//  if(top == -1) // stack에 아무것도 없으면
  if(isEmpty())
  {
    printf("stack underflow\n");
    return -1;  // 일반적으로 잘못된 경우의 정수값은 -1
  }
  return stack[top--];
}

void searchStack(int data)
{
  int i = 0;
  while(stack[i] != data)
  {
    i++;
  }
  printf("%d번 인덱스에서 %d 발견!!\n",i,data);
}


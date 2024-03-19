#include "head.h"
#include <stdio.h>
#include <stdlib.h>
/*
typedef struct NODE {  // 실질적인 구조체의 이름 생략
  int data;
  struct NODE* link;
} node;

typedef struct{
  node* rear;
  node* front;
}linkQ;
*/
linkQ* createlinkQ() // linkQ 생성 함수
{
  linkQ* lq = malloc(sizeof(linkQ));
  lq->rear = NULL;
  lq->front = NULL;
  return lq;
}
void enqueue(linkQ* lq, int ndata) // 노드 생성 함수
{
  node* newNode = malloc(sizeof(linkQ));
  newNode -> data = ndata;
  if(lq->front == NULL)
  {
    lq->front = newNode;
    lq->rear = newNode;
   // lq->front->link = lq->rear;
  }
  else
  {
    lq->rear->link = newNode;
    lq->rear = lq->rear->link;
  }
}

int isEmpty(linkQ* lq)
{
  if(lq->front == NULL) return 1;
  else return 0;
}

void printNode(linkQ* lq)
{
  if(isEmpty(lq))
  {
    printf("queue underflow\n");
  }
  node * curr = lq -> front;
  while( curr != NULL)
  {
    printf("printNode:%d\n",curr->data);
    curr = curr -> link;
  }
}

void dequeue(linkQ* lq)
{

  if(isEmpty(lq))
  {
    printf("queue underflow\n");
  }
  else
  {
    node*renode = lq->front;
    lq->front = lq->front->link;
    free(renode);
    printf("메모리 영역 반환 완료!\n");
  }
}

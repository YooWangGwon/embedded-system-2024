// file : test24_queue04.c
// date : 240319
// desc : 연결리스트를 이용한 큐

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {  // 실질적인 구조체의 이름 생략
  int data;
  struct NODE* link;
} node;

typedef struct{
  node* rear;
  node* front;
}linkQ;

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
    printf("%d 메모리 영역 반환 완료!\n",renode->data);
    free(renode);
  }
}
void main()
{
  linkQ* q = createlinkQ();
  enqueue(q, 10);
  enqueue(q, 20);
  enqueue(q, 30);
  enqueue(q, 40);

  printNode(q);

  dequeue(q);
  dequeue(q);

  printNode(q);

  dequeue(q);
  dequeue(q);
  //  dequeue(q);

  // printNode(q);
  // printf("%d\n",dequeue(q)->data);
}

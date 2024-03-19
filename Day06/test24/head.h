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

linkQ* createlinkQ(); // linkQ 생성 함수

void enqueue(linkQ* lq, int ndata); // 노드 생성 함수

int isEmpty(linkQ* lq);

void printNode(linkQ* lq);

void dequeue(linkQ* lq);





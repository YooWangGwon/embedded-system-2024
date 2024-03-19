#include "head.h"
#include<stdio.h>
#include<stdlib.h>
/*
extern linkQ* createlinkQ();
extern void enqueue(linkQ*, int);
extern int isEmpty(linkQ* lq);
extern void printNode(linkQ* lq);
extern void dequeue(linkQ* lq);
*/
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
  dequeue(q);

  printNode(q);
  // printf("%d\n",dequeue(q)->data);
}

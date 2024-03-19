// file : test23_queue03.c
// date : 240318
// desc : queue 03
/*연결리스트를 이용한 Queue 자료구조*/

#include <stdio.h>
#include <stdlib.h>
#define Q_SZ 10

typedef struct QUEUE
{
  char myque[Q_SZ];
  int front;
  int rear;
} queue;

queue* createQueue()
{
  queue* newQueue =(queue*)malloc(sizeof(queue));
  if(newQueue == NULL) exit(1);  // 메모리 할당 받는것을 실패하면 함수 나가기
  newQueue -> front = 0;
  newQueue -> rear = -1;
  return newQueue;
}

int isFull(queue* que)
{
  if(que->rear >= Q_SZ-1) return 1;
  else return 0;
}

void enqueue(int data, queue* que)
{
  if(isFull(que))
  {
  printf("Queue OverFlow");
  return;
  }
  que->myque[++(que->rear)] = data;
  printf("%d번 값 %c 삽입!!\n",que->rear,data);
}

int isEmpty(queue* que)
{
  if(que->front > que->rear) return 1;
  else return 0;
}

char dequeue(queue* que)
{
  if(isEmpty(que))
  {
    printf("Queue UnderFlow\n");
    return 'x';
  }
  //return que->myque[que->front];
  char deq_data = que->myque[que->front];
  int curr = 0;
  while(1)
  {
    if(curr == que->rear) break;
    else que->myque[curr++] = que->myque[curr+1];
    // curr++;
  }
  (que->rear)--;
  return deq_data;
  //return que->myque[que->front];
}

void printQueue(queue* que)
{
  printf("[printQueue]시작\n");
  for (int i = 0; i <= que->rear; i++)
  {
    printf("출력:%c\n",que->myque[i]);
  }
  printf("[printQueue]종료\n");
}

void main()
{
  queue* q = createQueue();

  enqueue('a', q);
  enqueue('b', q);
  enqueue('c', q);
  enqueue('d', q);
  enqueue('e', q);
  enqueue('f', q);

  printQueue(q);

  printf("%c\n",dequeue(q));
  printf("%c\n",dequeue(q));
  printf("%c\n",dequeue(q));
  printf("%c\n",dequeue(q));

  printQueue(q);

  printf("%c\n",dequeue(q));
  printf("%c\n",dequeue(q));
  printf("%c\n",dequeue(q));

  free(q);
}

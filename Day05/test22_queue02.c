// file : test22_queue02.c
// date : 240318
// desc : Queue 2

#include <stdio.h>

void main()
{
  int ary[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int queue[20];
  int rear = 0, front = 0;
  int size = sizeof(ary)/sizeof(ary[0]); // 배열 전체의 크기를 방의 크기로 나>
  // 큐에 삽입
  for (int rear = 0; rear < size ; rear++)
  {
    queue[rear] = ary[rear];
  }
  printf("%d\n",rear);
  // 큐에서 삭제
  for (int front = 0; front < size ; front++)
  {
    printf("%d\n",queue[front]);
  }
}

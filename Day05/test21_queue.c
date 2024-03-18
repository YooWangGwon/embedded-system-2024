// file : test21_queue.c
// date : 240318
// desc : queue 1

# include <stdio.h>
# define Q_SIZE 10

/* 전역 선언 */
int rear = -1;
int front = -1;
int queue[Q_SIZE];

void enqueue(int _data) // 배열 이름은 주소이기 때문에 포인터 변수로 받음
{
  if(rear >= Q_SIZE - 1) // 초기값에 따라 달라짐
  {
    printf("QUEUE OverFlow!!\n");
    return;
  }
  queue[++rear] = _data;
}

int dequeue()
{
  if(rear == front)
  {
    printf("QUEUE UnderFlow!!\n");
    return -1;
  }
  return queue[++front];
}

void main()
{
//  int rear = -1;
//  int front = -1;
//  int queue[Q_SIZE];

  enqueue(10);  // Call By Reference이어야 변수를 자유롭게 변경할 수 있다
  enqueue(20);
  enqueue(30);
  printf("%d\n",dequeue()); // 10
  printf("%d\n",dequeue()); // 20
  printf("%d\n",dequeue()); // 30
}

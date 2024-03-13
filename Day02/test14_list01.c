// file : test14_list01.c
// date : 240313
// desc : 연결리스트

# include<stdio.h>
# include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next; // 자기자신을 가리키는 구조체 변수(자기 참조 구조체)
}Node;

void main()
{
  Node *node1 = malloc(sizeof(Node)); // 구조체 Node 타입 만큼의 메모리 공간[>
  // malloc을 통해 메모리 공간에 대한 주소를 받기 때문에 포인터 변수여야한다.
  node1->data = 10;
  node1->next = NULL;

  printf("node1 data:%d\n",node1->data);
  printf("node1 next:%d\n",node1->next);

  Node *node2 = malloc(sizeof(Node));
  node2->data = 11;
  node2->next = NULL;
  printf("node2 data:%d\n",node2->data);
  printf("node2 next:%d\n",node2->next);


  // node1의 주소값인 next에 node2의 주소값을 대입
  node1->next = node2;
  node1->data = node2->data;
  printf("data:%d\n",node1->data);

  free(node2);
  free(node1);
}
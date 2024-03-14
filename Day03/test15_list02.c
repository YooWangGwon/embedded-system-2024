// file : test15_list02.c
// date : 240314
// desc : 연결리스트 2

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE // 배열이 아니기 때문에 index사용 불가능
{                   // 때문에 검색이 어려움. but 수정과 삭제가 용이함.
  int data;
  struct NODE *next;
} node;

void main()
{
  node *head = (node*)malloc(sizeof(node)); // head node : 항상 첫번째 노드를 가리킴
  head->next = NULL;   // 첫번째 노드를 가리키는 next값만 있으면 됨
                       // data값은 필요없음

  node *node1 =(node*) malloc(sizeof(node)); // malloc을 통해 메모리 공간에 대한 주소를 받음
                                             // (node*)는 리턴값 자료형 -> 생략가능
  node1->data = 10;
  node1->next = NULL;
  head->next = node1;

  node *node2 = (node*)malloc(sizeof(node));
  node2->data = 20;
  node2->next = NULL;

  node1->next = node2; // node1에 node2를 연결

  node *node3 = malloc(sizeof(node));
  node3->data = 30;
  node3->next = NULL;
  node2->next = node3;

  node *curr = head->next;  // 동적 할당 받을 필요 없음. 첫번째 노드를 가리키>
  while(curr != NULL) // 마지막 노드의 next값이 곧 curr값
  {
  printf("%d\n",curr->data);
  curr = curr->next; // curr->next의 값, 즉 node1의 next값인 node2를 curr에 대입
  }

  free(node1);
  free(node2);
  free(node3);
}


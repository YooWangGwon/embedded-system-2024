// file : test16_list03.c
// date : 240314
// desc : 연결리스트 3

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
  int data;
  struct NODE *next;
}node;

void pre_addNode(node* pnode, int pdata)  // 전위 삽입
{
  node* newNode = malloc(sizeof(node));
  newNode -> data = pdata;
  newNode -> next = pnode->next;  // pnode인 head의 next값, NULL값이 대입됨
  pnode -> next = newNode;  // head의 next값에 새로운 노드의 주소가 대입됨
}

void rear_addNode(node* pnode, int pdata) // 후위 삽입
{
  node* newNode = malloc(sizeof(node));
  newNode -> data = pdata;
  newNode -> next = NULL;
/*
  if(pnode->next == NULL)
  {
    pnode->next = newNode;
  }
  else
  {
    node* curr = pnode -> next;
    while(curr->next != NULL)
    {
      curr = curr -> next;
    }
  curr->next=newNode;
  }
*/
  while(pnode->next != NULL)
  {
    pnode = pnode->next;
  }
  pnode -> next = newNode;

}

void showNode(node* pnode)
{
  node*curr = pnode->next;
  while(curr != NULL)
  {
    printf("%d\n",curr->data);
    curr = curr->next;
  }
}

void showNode2(node* pnode)
{
 // pnode = pnode - next;
  while(pnode != NULL)
  {
    printf("출력 : %d\n",pnode->data);
    pnode = pnode -> next;
  }
}

void freeNode(node* pnode)
{
  node*curr = pnode->next;
  while(curr != NULL)
  {
    pnode -> next = curr -> next;
    free(curr);
    printf("메모리 영역 반환\n");
    curr = pnode -> next;
  }
  free(pnode);
  printf("head 반환\n");
  printf("메모리 영역 전부 반환 완료\n");
}

void main()
{
  node* head = (node*) malloc(sizeof(node));
  head -> next = NULL;
/*
  pre_addNode(head, 10);  // 첫번째 노드로 삽임
  pre_addNode(head, 20);
  pre_addNode(head, 30);
  pre_addNode(head, 40);
  pre_addNode(head, 50);

  node* curr = head->next;
  while(curr != NULL)
  {
    printf("%d\n",curr->data);
    curr = curr->next;
  }

  curr = head->next;
  while(curr!=NULL)
  {
    // curr = head->next;
    head -> next = curr -> next; // 메모리 반환 전에 head가 두번째 node를 가[>
    free(curr);          // 첫번째 node를 가리키는 curr의 메모리 반환 -> 두번>
    curr = head->next;   // curr 값이 두번째 node를 가리키게 함
  }

  printf("%d\n",head->next);
  //  printf("%d\n",head);  // 메모리 반환 여부 확인 -> Segmentaition Fault:(>

  printf("%d\n",curr);
*/
  rear_addNode(head, 10);
  rear_addNode(head, 20);
  rear_addNode(head, 30);
  rear_addNode(head, 40);
  rear_addNode(head, 50);
  pre_addNode(head, 70);
  pre_addNode(head, 60);
//  showNode(head);
  showNode2(head);
/*
  node* curr2 = head -> next;
  while(curr2 != NULL)
  {
    printf("%d\n",curr2->data);
    curr2 = curr2->next;
  }
*/
  freeNode(head);
}



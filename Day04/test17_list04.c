// file : test17_list04.c
// date : 240315
// desc : 연결리스트 4

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
  int data;
  struct NODE *next;
}node;

typedef struct
{
  node* head;
} headNode;

headNode* createHeadNode(void)
{
  headNode* hnode;
//  headNode* hnode = malloc(sizeof(headNode));
  node* head = malloc(sizeof(node));
//  if(hnode != NULL)
//  {
//  hnode -> head -> next = NULL;
//  }
  return hnode;
}
/*
void pre_addNode(headNode* pnode, int pdata)  // 전위 삽입
{
  node* newNode = malloc(sizeof(node));
  newNode -> data = pdata;
  newNode -> next = pnode->head;  // pnode인 head의 next값, NULL값이 대입됨
  pnode -> head = newNode;  // head의 next값에 새로운 노드의 주소가 대입됨
  printf("노드 생성!!\n");
}
*/
/*
void rear_addNode(headNode* pnode, int pdata) // 후위 삽입
{
  node* hnode = pnode->head;
  node* newNode = malloc(sizeof(node));
  newNode -> data = pdata;
  newNode -> next = NULL;

  while(hnode->next != NULL)
  {
    hnode = hnode->next;
  }
  hnode -> next = newNode;
  printf("노드 생성!!");
}
*/
/*
void showNode(headNode* pnode)
{
  node*curr = pnode->head;
  while(curr != NULL)
  {
    printf("%d\n",curr->data);
    curr = curr->next;
  }
}

void showNode2(headNode* pnode)
{
  while(pnode->head != NULL)
  {
    printf("출력 : %d\n",pnode-> head -> data);
    pnode -> head = pnode -> head -> next;
  }
}
*/
/*
void allFreeNode(headNode* pnode)
{
  // pnode -> head = pnode -> head -> next;
  node*curr = pnode->head;
  int a=0;
  while(curr != NULL)
  {
    pnode -> head -> next = curr -> next;
    free(curr);
    a++;
    printf("%d번째 메모리 영역 반환\n",a);
    curr = pnode ->head-> next;
  }
  free(pnode);
  printf("head 반환\n");
  printf("메모리 영역 전부 반환 완료\n");
}
*/
void main()
{
  headNode* headnode = createHeadNode();
  headnode -> head -> next = NULL;

  printf("%d\n",headnode->head->next);

  /*
  pre_addNode(headnode, 10);
  pre_addNode(headnode, 20);
  pre_addNode(headnode, 30);
  pre_addNode(headnode, 40);
  pre_addNode(headnode, 50);

  showNode2(headnode);

  allFreeNode(headnode);
  */
}

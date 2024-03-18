// file : test16_list05.c
// date : 240318
// desc : 연결리스트 5

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
  int data;
  struct NODE *next;
}node;

typedef struct  HEADNODE
{
  node* head;
} headNode;

headNode* createHeadNode(void)
{
  headNode* hnode = malloc(sizeof(headNode));
  if(hnode != NULL)
  {
  hnode -> head = NULL;
  }
  return hnode;
}

void pre_addNode(headNode* pnode, int pdata)  // 전위 삽입
{
  node* newNode = malloc(sizeof(node));
  if(newNode == NULL)
  {
  return -1; // 메모리 공간을 할당받지 못한 경우, 함수호출로 돌아가는 것
  }
  if(newNode != NULL)
  {
  newNode -> data = pdata;
  newNode -> next = pnode->head;  // pnode인 head의 next값, NULL값이 대입됨
  pnode -> head = newNode;  // head의 next값에 새로운 노드의 주소가 대입됨
  printf("전위 삽입 노드 생성!!\n");
  }
}

void rear_addNode(headNode* pnode, int pdata) // 후위 삽입
{

  node* newNode = malloc(sizeof(node));
  if(newNode != NULL)
  {
    newNode -> data = pdata;
    newNode -> next = NULL;
    if(pnode->head == NULL)
    {
      pnode->head = newNode;
    }
    else
    {
      node* curr = pnode -> head;
      while(curr->next != NULL)
      {
        curr = curr -> next;
      }
      curr -> next = newNode;
    }
  }
  printf("후위 삽입 노드 생성!!\n");
}


void showNode(headNode* pnode)
{
  node*curr = pnode->head;
  int b = 1;
  printf("[showNode 출력 시작]\n");
  while(curr != NULL)
  {
    printf("%d 번째 출력 : %d\n",b,curr->data);
    curr = curr->next;
    b++;
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

void allFreeNode(headNode* pnode)
{
  // pnode -> head = pnode -> head -> next;
  node*curr = pnode->head;
  int a=0;
  printf("[메모리 영역 반환 시작]\n");
  while(curr != NULL)
  {
    pnode -> head = curr -> next;
    free(curr);
    a++;
    printf("%d번째 메모리 영역 반환\n",a);
    curr = pnode ->head;
  }
  free(pnode);
  printf("head 반환\n");
  printf("메모리 영역 전부 반환 완료\n");
}

node* searchNode(headNode* pnode, int data) // data를 통한 노드 검색
{
  node*curr = pnode -> head;
  int a = 1;
  printf("[검색 시작!]\n");
  while(curr->data != data)
  {
    curr = curr -> next;
    a ++;
  }
  printf("%d번째 노드에서 data %d 발견!!\n",a,data);
  return curr;
}

void main()
{
  // headNode* headnode = createHeadNode();
  headNode* headnode = malloc(sizeof(headnode));
  // headnode -> head -> next = NULL;

  // printf("%d\n",headnode->head->next);


  pre_addNode(headnode, 10);
  pre_addNode(headnode, 20);
  pre_addNode(headnode, 30);
  pre_addNode(headnode, 40);
  pre_addNode(headnode, 50);
  rear_addNode(headnode, 70);
  rear_addNode(headnode,100);

  node*searchResult = searchNode(headnode, 30);
  printf("검색 결과값 : %d\n",searchResult->data);

  showNode(headnode);

  allFreeNode(headnode);
}

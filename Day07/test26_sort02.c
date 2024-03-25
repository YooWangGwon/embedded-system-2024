// file : test26_sort02.c
// date : 240320
// desc : 정렬 - 오름차순, 함수로

#include <stdio.h>

void ascending(int* ary, int a)     // 오름차순 정렬함수
{
  //int a = sizeof(ary)/sizeof(ary[0]);   // 포인터 변수의 크기는 8byte, int의 크기는 4byte
  printf("a:%d\n",a);
  for(int i = 0; i < a-1; i++) {
    for(int j = 0; j < a-1; j++) {
      if(ary[j] > ary[j+1]) {
        int tmp = ary[j];
        ary[j] = ary[j+1];
        ary[j+1] = tmp;
      }
    }
  }
}

void showAry(int* ary, int a)     // 배열 출력 함수
{
  printf("배열 출력 시작\n");
  //int a = sizeof(ary)/sizeof(ary[0]);
  for(int i = 0; i < a; i++)
  {
    printf("%d\n",ary[i]);
  }
  printf("배열 출력 종료\n");
}

void main()
{
  int ary[] = { 4, 5, 3, 10, 7, 2, 1, 6, 8 };
  int a = sizeof(ary)/sizeof(ary[0]);
  ascending(ary, a);
  showAry(ary, a);
}

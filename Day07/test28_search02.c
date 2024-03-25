// file : test28_search02.c
// date : 240320
// desc : 이진 탐색

// 이진 탐색을 하려면 배열이 오름차순이나 내림차순으로 정렬되어 있어야한다.

#include <stdio.h>

int bSearch(int* ary, int size, int obj)
{
  int first = 0;
  int last = size;
  int middle = 0;

  while(first <= last)
  {
    middle = (first + last)/2;
    if(obj == ary[middle]) return middle;
    else{
      //if(obj < ary[middle]) first = middle + 1; // 내림차순일 경우
      if(obj > ary[middle]) first = middle + 1; // 오름차순일 경우
      else last = middle -1;
    }
  }

  return -1;
}

void main()
{
  int ary[] = {1,2,3,4,5,6,7,8,9,10}; // 오름차순 배열
//  int ary[] = {10,9,8,7,6,5,4,3,2,1}; // 내림차순 배열
  int size = sizeof(ary)/sizeof(ary[0]);

  int ridx = bSearch(ary, size, 3);
  if(ridx == -1) printf("찾는 대상이 없습니다.\n");
  else printf("찾은 인덱스 : %d\n",ridx);
}

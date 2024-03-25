// file : test27_search01.c
// date : 240320
// desc : 순차탐색

#include <stdio.h>

int lSearch(int* ary, int a, int obj) // a:배열의 원소 개수, obj:찾고싶은 값
{
  int ridx = -1;
  for(int i = 0; i < a;i++)
  {
    if(obj == ary[i])
    {
      ridx = i;
    }
  }
  return ridx;
}

void main()
{
  int ary[] = { 3, 5, 2, 4, 9, 8, 1};
  int size = sizeof(ary)/sizeof(ary[0]);
  int ridx;
  ridx = lSearch(ary, size, 9);
  if(ridx == -1) printf("찾는 값이 없습니다.");
  else
  {
    printf("찾은 인덱스:%d\n", ridx);
  }
}

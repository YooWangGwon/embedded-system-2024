// file : test25_sort01.c
// date : 240320
// desc : 정렬 - 오름차순

#include <stdio.h>

void main()
{
  int ary [] = {9, 4, 8, 25, 15, 3, 7, 2, 1, 5};  // 원소 개수 : 10
  // 오름차순으로 정렬

  int a = sizeof(ary)/sizeof(ary[0]); // 배열 원소 개수 = 전체 배열의 크기/원소 1개의 크기

  for(int j = 0; j < a-1; j++){     // 이중 for문을 통해 1차적으로 정렬한 배열을 다시한번 정렬
    for (int i = 0; i < a-1; i++){  // ary[i+1]을 사용하기 때문에 원소 개수에서 1을 빼기
      if(ary[i] > ary[i+1]){        // 기준 인덱스의 값이 뒤의 값 보다  큰 경우
        int tmp;                    // 임시 변수 선언
        tmp = ary[i];               // 임시 변수에 기준 인덱스의 값을 대입
        ary[i] = ary[i+1];          // 기준 인덱스 자리에 뒤의 값을 대입
        ary[i+1] = tmp;             // 뒤의 인덱스 자리에 임시 변수에 저장된 기준 인덱스 값을 대입
      }
    }
  }

  for (int i = 0; i < a; i++)
  {
    printf("%d\n",ary[i]);
  }
}

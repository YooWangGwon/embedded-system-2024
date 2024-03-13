#include <stdio.h>
#define MAX 20

void main()
{
    int arr[MAX];
    int num;

    printf("배열 입력\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("Input Data >> ");
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("배열 역순 출력\n");

    for (int i = MAX - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

}

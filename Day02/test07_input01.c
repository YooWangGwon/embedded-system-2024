// file : test07_input01.c
// date : 240313
// desc : 입력1

void main()
{
  while(1)
  {
   int n;
   printf("정수 하나를 입력하세요(0은 종료) : ");
   scanf("%d", &n); // 저장할 변수의 주소를 작성

   if (n==1)
   {
     printf("1을 입력하셨습니다.\n");
   }
   else if(n==2)
   {
     printf("2를 입력하셨습니다.\n");
   }
   else if(n==3)
   {
     printf("3을 입력하셨습니다.\n");
   }
   else if(n==4)
   {
     printf("4를 입력하셨습니다.\n");
   }
   else if(n==5)
   {
     printf("5를 입력하셨습니다.\n");
   }
   else if(n==0)
   { break; }
  }
}

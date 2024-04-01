# embedded-system-2024
부경대학교 2024 IoT 개발자 과정 임베디드시스템 학습 리포지토리

## 1일차(24.03.12)

- 라즈베리파이 글꼴 설정
	- PuTTY - 메뉴  - Appearance에서 글꼴 및 글자 크기 설정 가능

- ★라즈베리 파이 기본명령어★
	- clear 화면 글자 정리
	- sudo apt update : 라즈베리 파이 OS 버전 업데이트
	- sudo apt upgrade -y : 설치된 모든 소프트웨어 패키지 업그레이드

	- pwd : 현재 내 위치
	- ls : 현재 내가 있는 위치에 있는 목록(파란색은 폴더, 하얀색은 파일)
	- ls -a : 숨겨져있는 파일까지 확인
	- ls -l : 현재 내가 있는 위치에 있는 파일들을 상세하게 출력
	- ls /etc : 환경과 관련된 파일들이 오며있는 etc디렉터리의 내용들을 출력
	- mkdir '파일명' : 현재 위치에 새로운 디렉터리 만들기 (예시:mkdir Work -> Work 폴더 생성)
	- rm -fr	 '파일명' (예시:rm -fr Work) : 폴더 삭제
	- cd(change directory) '파일명' : 디렉토리 변경(예시:cd Work)
	- cd .. : 상위 디렉토리로 빠져나가
	- sudo shutdown now 

- nano 환경 설정
	- nano //etc//nanorc
	- set autoindent 주석 제거하기(del) ->set linenumbers 주석 제거 -> set tapsize 주석 제거하고 8을 2로 변경
	- nanorc는 일반 사용자 권한으로 내용을 변경 할 수 없음
	- 관리자 권환(앞에 sudo -> sudo nano //etc//nanorc)으로 들어가서 변경가능

- 라즈베리 파이 사용시 유의사항
	- 기존 PC같이 사용해선 안됨!!
	- 순서에 맞춰서 사용(동작 중에 다른 명령어 처리 안됨)
	
## 2일차(24.03.13)
- VNC Viwer설치
	- Window용 EXE x86/x64을 클릭해서 다운로드
	- PuTTY에서 vncserver-virtual입력
		
- 코드 작성
	- nano test.c : nano를 통해 C 언어 코딩 파일 생성
	- C++에서는 int main ()이지만 Putty에서는 void main()
	- 상단의 바를 오른쪽 클릭하고 Duplicate Session을 하면 창이 하나 더 생긴다.(하나는 코드 작성용, 하나는 컴파일용)
	- gcc -o test test.c : gcc 컴파일 명령어 -> test.c 소스 파일을 기반으로 test 실행 파일을 생성
	- gcc '소스파일 명' : 기본적인 실행파일 생성 (a.out)
	- ./'실행파일명' : ./test -> 실행파일 test 실행파일
	- mv : 파일 이동, 수정
	- cp '복사 파일' '복사 대상': 복사 (예시: cp test01.c test.c -> test.c파일을 복사하여 test01.c를 생성)
	
	- 입력과 출력
		- C에서는 printf(출력), scanf(입력) 사용
		- scanf에서는 저장할 변수를 바로 쓰는 것이 아닌 저장할 변수의 주소를 사용(예시:scanf("%d",&d))
		- 배열의 값을 입력 받을 때는 주소를 사용할 필요 없음
		
	- 열거형
		```
		void main()
		{
		enum season {SPRING=5, SUMMER, FALL, WINTER} s;
		// 첫번째 값에 부여한 숫자에 따라 나머지 값들의 숫자가 결정됨
		s = SPRING;
		printf("%d\n", s);

		s = WINTER;
		printf("%d\n", s);

		}
		```	
	
- Error와 Warning
	- Error 은 빨간색 문구 -> 사용 X
	- Warning은 분홍색 문구 -> 사용 O
	
## 3일차(24.03.14)
- 자료구조
	- 연결리스트(Linked List)
		- 연결리스트 : 여러 개의 노드들이 순차적으로 연결된 형태를 갖는 자료구조
		- 첫번째 노드를 head, 마지막 노드를 tail이라고 함
		- "구조체 명" "노드명" = ("malloc으로 리턴되는 값의 자료형"*) malloc(sizeof("구조체명"));
		- node *head = (node*)malloc(sizeof(node));
		- free("노드명")을 통해 동적할당된 메모리 영역 반환
		- 삽입과 삭제가 용이하지만 탐색이 어려움
		
## 4일차(24.03.15)
- 자료구조
	- 연결리스트
		- head 생성 함수 만들기
		
## 5일차(24.03.18)
- 자료구조
	- 스택(Stack)
		- 선입후출(First In Last Out), 후입선출(Last In First Out)
		- 활용 예시 : 실행취소(undo), 웹페이지 뒤로 가기
	- 큐(Queue)
		- 선입선출(First In First Out), 후입후출(Last In Last Out)
		
## 6일차(24. 03. 19)
- 자료구조
	- 큐(queue)
		- enqueue(int data, queue* que)
		- dequeue(queue* que)
		- printQueue(queue* qUe)
		
	- 리눅스에서 makefile
		```
		test: main.o func.o
		  gcc -o test main.o func.o

		main.o: main.c funch.h (헤더파일은 목적코드 파일생성X)
		  gcc -c -o main.o main.c

		func.o: func.c funch.h
		  gcc -c -o func.o func.c
		```
		
## 7일차(24. 03. 20)
- 자료구조
	- 선택 정렬(Selection Sort)
	
	- 순차 탐색(Sequential Search)
	
	- 이진 탐색(Binary Search) : 이진탐색은 배열이 오름차순이나 내림차순으로 정렬되어 있어야함
	```
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
	}
	```
- 네트워크 프로그래밍과 소켓의 이해
	- 표준입출력함수 기반 파일 조작하기
		- 파일 열기
			- FILE * fopen(const char* a, const char* b);
			- a : 파일의 이름
			- b : 파일의 모드 
			
			- 파일의 모드
				- r(read) : 읽기 모드. 파일이 없으면 에러 발생
				- w(write) : 쓰기 모드. 파일이 없으면 새로 만들고 기존 파일이 있으면 이전의 내용을 지우고 새로 작성
				- a(append) : 추가 쓰기 모드. 파일이 없으면 새로 만들고 기존 파일이 있으면 그 파일의 가장 뒤부터 작성
				- r+ : 읽기와 쓰기 모드로 파일 열기. 파일이 없으면 에러 발생
				- w+ : 읽기와 쓰기 모드로 파일 열기. 파일이 없으면 새로 만들고 기존 파일이 있으면 이전의 내용을 지우고 새로 작성
				- a+ : 추가 쓰기 모드로 파일 열기. 파일이 없으면 새로 만들고 기존 파일이 있으면 그 파일의 가장 뒤부터 작성
			
		- 파일 닫기
			- fclose(const char*a)
			- a : 파일의 이름
			
		- 파일에 출력(입력)
			- int fprintf(FILE* restrict stream, const char *restrict format-string, argument-list)
			- restrict stream : 파일 포인터
			- format string : 파일에 출력(입력)할 데이터의 형태
			- argument-list : 출력(입력)할 데이터 또는 데이터의 주소
			
		- 파일에서 읽기
			- int fscanf(FILE* restrict stream, const char *restrict format string, argument-list)
			- restrict stream : 파일 포인터
			- format string : 읽어올 데이터의 형태
			- argument-list : 읽어온 데이터를 담을 곳
			
	- 리눅스 기반 파일 조작하기
		- 파일 디스크립터(File Descriptor)
		    - 시스템으로부터 할당 받은 파일 또는 소켓에 부여된 정수
			- 일반적으로 파일과 소켓은 생성의 과정을 거쳐야 파일 디스크립터가 할당
			- 0 : 표준입력(Standard Input)
			- 1 : 표준출력(Standard Output)
			- 2 : 표준예러(Standard Error)
			
		- 파일 열기
			- int open(const char *path, int flag, mode_t mode);
			- path : 파일 이름을 나타내는 문자열의 주소 값 전달
			- flag : 파일의 오픈 모드 정보 전달
			- mode : 파일의 권한 설정
			- 성공시 파일 디스크립터, 실패 시 -1 반환
			
			- 파일의 오픈 모드
				- O_CREAT : 필요하면 파일을 생성
				- O_TRUNC : 기존 데이터 전부 삭제
				- O_APPEND : 기존데이터를 보존하고, 뒤에 이어서 저장
				- O_RDONLY : 읽기 전용으로 파일 오픈
				- O_WRONLY : 쓰기 전용으로 파일 오픈
				- O_RDWR : 읽기 쓰기 겸용으로 파일 오픈
				
			- 파일 권한
				- 1 : 실행, 2 : 쓰기, 4 : 읽기
				- 000X(넷째 자리) : 기타사용자, 00X0(셋째 자리) : 그룹, 0X00(둘째 자리) : 사용자
				- S_IRWXU, S_IRUSR, S_IWUSR, S_IXUSR : 사용자에게 각각 전체권한, 읽기 권한, 쓰기 권한, 실행 권한 부여
				- S_IRWXG, S_IRGRP, S_IWGRP, S_IXUSR : 그룹에게 각각 전체권한, 읽기 권한, 쓰기 권한, 실행 권한 부여
				- S_IRWXO, S_IROTH, S_IWOTH, S_IXOTH : 기타 사용자에게 각각 전체권한, 읽기 권한, 쓰기 권한, 실행 권한 부여
			
		- 파일 닫기
			- int close(int fd);
			- fd : 닫고자하는 파일 또는 소켓의 파일 디스크립터 전달
			- 성공시 O, 실패시 -1
			
		- 파일에 데이터 쓰기
			- ssize_t write(int fd, const void * buf, size_t nbytes);
			- fd : 파일 디스크립터 
			- buf : 전송할 데이터가 저장된  버퍼의 주소 값 전달
			- nbytes : 전송할 데이터의 바이트 수
			- 성공 시 전달한 바이트 수, 실패시 -1 반환
		
		- 파일에 저장된 데이터 읽기
			- ssize_t read(int fd, void *buf, size_t nbyte);
			- fd : 데이터 수신 대상을 나타내는 파일 디스크립터 전달
			- buf : 수신한 데이터를 저장할 버퍼의 주소 값 전달
			- nbytes : 수신할 최대 바이트 수 전달
			- 성공 시 수신한 바이트 수(단 파일의 끝을 만나면 O), 실패시 -1 반환)
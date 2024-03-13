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
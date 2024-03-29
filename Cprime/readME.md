# #include<stdio.h>
<br>
해당 코드는 코드가 있는 위치에 stdio.h 전문이 복사된 것과 같은 효과를 가진다.
#include문은 C 전처리기 지시자의 한 예이다.
stdio.h는 standard와 input/output의 줄인말의 합성어다.
해당 해더파일에는

1. 입출력 함수 : <br>
* printf():포맷 문자열을 전달인자로 받아, 출력하는 함수.<br>
* scanf():입력받은 포맷 문자열을 전달 인자로 받아, 변수에 저장하는 함수<br>
* fopen(), fclose(), fread(), fwrite() : 13장 파일 입출력에서 다룰 예정<br><br>
2. 파일 입출력 상수:
	stdin, stdout, stderr : stdlib.h 해더 파일을 다룰 떄, 다시 다룰 예정
	FILE: 13장 파일 입출력에서 다룰 예정<br><br>
3. 형식 지정자: printf(), scanf()와 같은 함수에서 형식 지정에 사용됨. (형식 지정일 뿐 자료형이 변한 것은 아님)<br><br>
4. 파일모드(r,w,a,rb,wb) : 13장 파일 입출력에서 다시 다룰 예정<br><br>
5. 기타 함수와 상수:
	feof(), ferror() : 13장 파일 입출력에서 다시 다룰 예정
	BUFSIZE：표준 입출력 버퍼 크기를 나타내는 상수
	EOF：파일의 끝을 나타내는 상수

## scanf() 사용시 오류가 발생할 때.
 사용자로부터 입력을 받은 후 컴퓨터가 이를 처리하는데 약간의 텀이 있음.
 버퍼는 그 텀을 없애기 위해서 만들어짐, 버퍼는 입력버퍼, 출력버퍼 두가지가 있음.

 입력버퍼의 경우 사용자가 입력한 정보를 임시로 저장하는 공간으로, 처음 받은 정보부터 차례대로 처리함.

 이때, 버퍼 오버플로우가 발생하게 되는 것인데 입력 버퍼가 과도하게 데이터로 채워지면 정보가 변수에 저장되고도 입력버퍼에 남아있게 되어 scanf()오류가 발생하게 됨. 이 경우 해킹이나 데이터 저장에 차질을 생김.

해결책으로 #define _CRT_SECURE_NO_WARNINGS, #pragma warning(disable:4996), scanf_s()등의 방법이 있음
<br><br>
* #define _CRT_SECURE_NO_WARNINGS
	보안관련 함수의 경고를 무시하게 해주는 전처리기. 보안에 문제가 생길 수 있기에 권장하지 않음
* #pragma warning(disable:4996)
	pragma는 특정함수의 경고를 무시하는데 사용하고, 그 중 4996은 보안을 담당함. 권장하지 않음
* scanf_s()
	scanf()와 safe의 합성어로 기본형식은 다음과 같음
	int scanf_s(const char *format, ...);
	다른 자료형과 사용할 때는 기존과 같이 사용하지만, 문자와 문자열 배열과 사용할 때는 전달인자를 세 개 사용하는	데, 첫~두 번째 전달인자는 기존과 같지만 세 번째 전달인자로 두 번째 전달인자의 size를 받음.
	ex) scanf(“%s”, &name, sizeof(name));

이와 별개의 개념이지만
while(getchar()!=’\n‘)
	continue;
를 사용해서 입력 버퍼안에 남아있는 값들을 버릴 수 있음.

## scanf_s()가 문자와 문자열에만 세 번째 전달 인자를 받는 이유.
다른 자료형의 경우 저장 공간의 크기가 정해져 있음. ex) int=4byte, long=4~8byte, double=8byte
char형의 경우 영어의 경우는 ASCII코드를 사용하고 이는 1byte임.
한국어의 경우 일반적으로 UTF-8을 사용하나, 다른 포맷을 사용하기도 함
UTF-8의 경우 2~3byte의 공간을 사용함으로 저장 공간의 크기 고정되지 않기에 버퍼 오버플로우의 가능성이 생김

## return 0;
return 0;을 사용하는 이유는 코드가 정상적으로 종료하였음을 인터페이스에 보고하기 위함임.
0이 아닌 다른 값을 넣으면, 코드에 에러가 있었음을 사용자에게 전달할수 있음.

# #주의사항#
문제 설명할 때, 문제를 읽지 말고 핵심 부분을 정리해서 설명할 것.
코드 설명할 때, 저 부분, 이 부분, 저 코드 등 지칭 대명사로 설명하지 말 것.

코드 설명시 제대로된 명칭으로 설명 할 것.<br>
int a; //int 형 변수 a를 선언함<br>
a=10; //int 형 변수 a에 10을 대입함<br>
int b=10; //int 형 변수 b을 선언과 동시에 10으로 초기화함.<br>
void ktc(int, double); //반환형이 void이고, 매개변수로 int형과 double형을 받는 사용자지정 함수 ktc를 선언함.
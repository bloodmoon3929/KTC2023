#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float mbs, mb, time;

	printf("다운로드 속도()와 다운받은 파일의 크기()를 기입하시오: ");
	scanf("%f %f", &mbs, &mb);
	time = (8*mb) / mbs;
	printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n%.2f초에 다운로드한다.",mbs, mb, time);
	
	return 0;
}
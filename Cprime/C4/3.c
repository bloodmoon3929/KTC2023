#include<stdio.h>

int main(void)
{
	float a = 21.3;
	float b = 2.129E+001;
	printf("입력된 것은 %.1f 또는 %.1e이다.\n",a ,a);
	printf("입력된 것은 %+.3f 또는 %.3e이다.",b, b);
}
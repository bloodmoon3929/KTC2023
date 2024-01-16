#include<stdio.h>

int main(void)
{
	int text, count = 0;
	while ((text = getchar()) != EOF) count++;
	printf("총 문자들의 수는 %d개 입니다.", count);
	return 0;
}
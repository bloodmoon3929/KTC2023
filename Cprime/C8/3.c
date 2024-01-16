#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int text, ct_lower = 0,ct_upper=0;
	while ((text=getchar()) != EOF)
	{
		if (islower(text)) ct_lower++;
		if (isupper(text)) ct_upper++;
	}
	printf("소문자들의 수는 %d개 입니다.",ct_lower);
	printf("대문자들의 수는 %d개 입니다.", ct_upper);
	return 0;
}
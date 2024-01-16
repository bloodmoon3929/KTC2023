#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	int col, row;
	char text;
	printf("반복할 문자를 기입하시오 : ");
	scanf(" %c", &text, sizeof(text));
	printf("몇열부터 반복할건지 기입하시오 : ");
	scanf("%d", &col);
	printf("몇열까지 반복할건지 기입하시오 : ");
	scanf("%d", &row);
	chline(text, col, row);
	return 0;
}
void chline(char ch, int i, int j)
{
	for (int a = 0; a <i; a++) printf(" ");
	for (int b = i; b < j; b++) printf("%c", ch);
}
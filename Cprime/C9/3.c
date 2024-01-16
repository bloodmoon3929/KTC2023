#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	int col, row;
	char text;
	printf("반복할 문자를 기입하시오 : ");
	scanf(" %c", &text, sizeof(text));
	printf("열을 몇번 반복할건지 기입하시오 : ");
	scanf("%d", &row);
	printf("행을 몇번 반복할건지 기입하시오 : ");
	scanf("%d", &col);
	chline(text, col, row);
	return 0;
}
void chline(char ch, int i, int j)
{
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < j; b++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
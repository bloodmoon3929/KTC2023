#include<stdio.h>

static int count = 0;
int return_count(void);
int main(void)
{
	int count;
	printf("반복문을 몇번 반복할지 기입하시오 : ");
	scanf_s("%d", &count);
	for (int i = 0; i < count; i++)
	{
		printf("%3d회 호출되었습니다.\n", return_count());
	}
	return 0;
}
int return_count(void)
{
	count++;
	return count;
}
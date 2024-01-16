#include <stdio.h>
#include <string.h>
void del_space(char*);
int main(void)
{
	char arr[80];
	while (1)
	{
		printf("문자열을 입력하시오(빈라인 입력시 종료) : ");
		if (fgets(arr, sizeof(arr), stdin) == NULL)break;
		arr[strcspn(arr, "\n")] = '\0';
		if (arr[0] == '\0')break;
		del_space(arr);
		printf("space 제거후 배열 : %s\n",arr);
	}
	return 0;
}
void del_space(char *arr)
{
	int len = strlen(arr);
	for (int j=0, i = 0; i < len; i++, j++)
	{
		if (arr[i] == ' ')
		{
			for (j=i; j < len; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
	}
}
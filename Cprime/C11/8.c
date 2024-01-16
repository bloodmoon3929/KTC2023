#include <stdio.h>
#include <string.h>
#include<stdbool.h>

char* string_in(char* main_arr, char* arr);
int main(void)
{
	char main_arr[20];
	char arr[20];
	char* find;
	while (true)
	{
		printf("문자열을 입력하시오(EOF입력시 종료) : ");
		if (fgets(main_arr, sizeof(main_arr), stdin) == NULL)break;
		main_arr[strcspn(main_arr, "\n")] = '\0';
		printf("찾고자 하는 문자열을 입력하시오 : ");
		if (fgets(arr, sizeof(arr), stdin) == NULL)break;
		arr[strcspn(arr, "\n")] = '\0';
		find = string_in(main_arr, arr);
		if (find == NULL)
			printf("해당 문자열을 찾지 못했습니다. \n");
		else
			printf("해당 문자열의 시작주소는 : %p\n", find);
	}
	return 0;
}

char* string_in(char* main_arr, char* arr)
{
	int len= strlen(arr);
	int is_possible;
	int nomatch = 1;

	is_possible = strlen(main_arr) + 1 - len;
	if (is_possible > 0)
		while ((nomatch = strncmp(main_arr, arr, len)) && is_possible--)
			main_arr++;
	if (nomatch)
		return NULL;
	else
		return (char*)main_arr;
}
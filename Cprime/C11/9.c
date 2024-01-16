#include <stdio.h>
#include <string.h>
#include<stdbool.h>
void reverse(char* arr);
int main(void)
{
	char arr[20];
	while (true)
	{
		printf("문자열을 입력하시오(EOF입력시 종료) : ");
		if (fgets(arr, sizeof(arr), stdin) == NULL)break;
		arr[strcspn(arr, "\n")] = '\0';
		printf("뒤집기 전 배열 %s\n",arr);
		reverse(arr);
		printf("뒤집기 후 배열 %s\n", arr);
	}
	return 0;
}

void reverse(char* arr)
{
	int len = strlen(arr);
	int right = len - 1, left = 0;
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++, right--;
	}
}
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void printStrings(char strings[][30], int count);
void printAsciiOrder(char strings[][30], int count);
void printLengthOrder(char strings[][30], int count);
void printFirstWordLengthOrder(char strings[][30], int count);
int main(void)
{
	int i;
	char arr[10][30];
	while (1)
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d번째 문자열을 입력하시오(10번 입력했거나 EOF일시 종료) : ", i + 1);
			if (fgets(arr[i], sizeof(arr[i]), stdin) == NULL)break;
			arr[i][strcspn(arr[i], "\n")] = '\0';
		}
		printf("다음중 고르시오.\n");
		int choice;
		while (1)
		{
			printf("1.원본리스트 출력\n");
			printf("2.ASCII코드 조회순으로 출력\n");
			printf("3.문자열의 길이순으로 출력\n");
			printf("4.문자열의 첫 단어의 길이순으로 출력\n");
			printf("5.종료\n");
			scanf("%d", &choice);
			getchar();
			switch (choice)
			{
			case 1:
				printStrings(arr, i); break;
			case 2:
				printAsciiOrder(arr, i); break;
			case 3:
				printLengthOrder(arr, i); break;
			case 4:
				printFirstWordLengthOrder(arr, i); break;
			case 5:
				return 0;
			default:
				printf("유효하지 않은 선택입니다. 다시 선택하세요.\n"); break;
			}
		}
	}
	return 0;
}
void printStrings(char strings[][30], int count)
{
	printf("입력된 문자열 출력:\n");
	for (int i = 0; i < count; i++)
		printf("%s\n", strings[i]);
}
void printAsciiOrder(char strings[][30], int count)
{
	printf("ASCII 순서로 출력:\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (strcmp(strings[i], strings[j]) > 0)
			{
				char temp[30];
				strcpy(temp, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], temp);
			}
		}
		printf("%s\n", strings[i]);
	}
}
void printLengthOrder(char strings[][30], int count)
{
	printf("문자열 길이순으로 출력:\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (strlen(strings[i]) > strlen(strings[j]))
			{
				char temp[30];
				strcpy(temp, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], temp);
			}
		}
		printf("%s\n", strings[i]);
	}
}
void printFirstWordLengthOrder(char strings[][30], int count)
{
	printf("첫 단어의 길이순으로 출력:\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			int len1 = 0, len2 = 0, k = 0;
			while (strings[i][k] != ' ' && strings[i][k] != '\0')
			{
				len1++;
				k++;
			}
			k = 0;
			while (strings[j][k] != ' ' && strings[j][k] != '\0')
			{
				len2++;
				k++;
			}
			if (len1 > len2)
			{
				char temp[30];
				strcpy(temp, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], temp);
			}
		}
		printf("%s\n", strings[i]);
	}
}
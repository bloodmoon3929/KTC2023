#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count_word(char*, char*);
int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		fprintf(stderr, "사용법 : %s\\파일이름\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if (argc == 2)
	{
		char name[100];
		printf("파일의 위치를 입력해 주세요 : ");
		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';
		count_word(name, argv[1]);
	}
	else
	{
		for (int i = 2; i < argc; i++)
		{
			count_word(argv[i], argv[1]);
		}
	}

	return 0;
}
void count_word(char* filename, char* word)
{
	int count = 0;
	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", filename);
		return;
	}

	char words[100];
	while (fgets(words, sizeof(words), fp) != NULL)
		continue;

	char* ptr = strstr(words, word);
	while (ptr != NULL)
	{
		ptr = strstr(ptr + 1, word);
		count++;
	}

	printf("%s : 입력한 문자가 %d개 있습니다\n", filename, count);

	if (fclose(fp) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");
}
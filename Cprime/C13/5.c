#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);
int main(int argc, char* argv[])
{
	FILE* fa,*fs;
	int files = 0;
	int ch;
	if ((fa = fopen(argv[1], "a+")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("출력 버퍼를 생성할 수 없습니다.\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (int i = 2; i < argc; i++)
	{
		if (strcmp(argv[i], argv[1]) == 0)
			fputs("자기 자신에게는 덧붙일 수 없습니다.\n", stderr);
		else if ((fs = fopen(argv[i], "r")) == NULL)
			fprintf(stderr, "파일을 열 수 없습니다.%s\n", argv[i]);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("입력 버퍼를 생성할 수 없습니다.\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "파일을 읽는 데 에러가 발생했습니다. %s.\n", argv[i]);
			if (ferror(fa) != 0)
				fprintf(stderr, "파일을 쓰는 데 에러가 발생했습니다. %s.\n", argv[1]);
			fclose(fs);
			files++;
			printf("%s 파일의 내용을 덧붙였습니다.\n", argv[i]);
		}
	}
	printf("종료. %d개의 파일을 덧붙였습니다.\n", files);
	rewind(fa);
	printf("%s 내용:\n", argv[1]);
	while ((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("종료 나타내기.");
	fclose(fa);
	return 0;
}
void append(FILE* source, FILE* dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}
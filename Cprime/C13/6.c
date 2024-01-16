#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE* in, * out;
	int ch;
	char name[100];
	char* temp,*filename='\0';
	int count = 0;
	printf("파일의 위치를 입력하시오 : ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';
	if (name==NULL)
	{
		fprintf(stderr, "사용법: C:\\Users\\gnbup\\Desktop\\ktc\\filename\n");
		exit(EXIT_FAILURE);
	}
	if ((in = fopen(name, "r")) == NULL)
	{
		fprintf(stderr, "\"%s\" 파일을 열 수 없다.\n", name);
		exit(EXIT_FAILURE);
	}
	temp = strtok(name, "\\");
	while (temp != NULL)
	{
		filename = temp;
		temp = strtok(NULL, "\\");
	}
	char* ptr = strstr(filename, ".txt");
	if (ptr) 
		strncpy(ptr, ".red", 4);
	
	if ((out = fopen(filename, "w")) == NULL)
	{
		fprintf(stderr, "출력 파일을 만들 수 없다.\n");
		exit(3);
	}
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했다.\n");
	return 0;
}
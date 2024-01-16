#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 47
int main(void)
{
	FILE* fp;
	char words[MAX];
	int count = 0;
	if ((fp = fopen("wordy", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"wordy\" 파일을 열 수 없습니다.\n");
		exit(EXIT_FAILURE);
	}
	rewind(fp);
	while (fgets(words, MAX, fp) != NULL)
		count++;
	rewind(fp);

	puts("파일에 추가할 단어들을 입력하시오. 입력을 끝내려면");
	puts("라인의 시작 위치에서 # 키를 누르시오..");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%3d: %s\n", ++count, words);
	puts("파일 내용:");
	rewind(fp);
	while (fgets(words, MAX, fp) != NULL)
		fputs(words, stdout);
	if (fclose(fp) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");
	return 0;
}
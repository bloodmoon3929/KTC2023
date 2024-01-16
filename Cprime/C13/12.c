#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	const char trans[] = " .`:~*=+%#";
	int int_double_arr[20][30];
	char char_double_arr[20][31];
	FILE* infile;
	for (int row = 0; row <20; row++)
		for (int col = 0; col < 31; col++)
			char_double_arr[row][col] = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "사용법 : %s\\파일이름\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((infile = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "%s파일을 열 수 없습니다.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (int row = 0; row < 20; row++)
		for (int col = 0; col < 30; col++)
			fscanf(infile, "%d ", &int_double_arr[row][col]);
	if (ferror(infile))
	{
		fprintf(stderr, "파일을 읽는데 오류가 발생했습니다.\n");
		exit(EXIT_FAILURE);
	}
	for (int row = 0; row < 20; row++)
		for (int col = 0; col < 30; col++)
			char_double_arr[row][col] = trans[int_double_arr[row][col]];
	for (int row = 0; row < 20; row++)
	{
		for (int col = 0; col < 30; col++)
			putchar(char_double_arr[row][col]);
		putchar('\n');
	}
	return 0;
}
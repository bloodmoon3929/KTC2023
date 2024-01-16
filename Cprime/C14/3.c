#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
char* s_gets(char* st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 
struct book { 
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
void sort_title(struct book* pb[], int n);
void sort_value(struct book* pb[], int n);
int main(void)
{
	struct book library[MAXBKS];
	struct book* pstruct[MAXBKS];
	int count = 0;
	int index;
	printf("도서 제목을 입력하시오.\n");
	printf("끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
		&& library[count].title[0] != '\0')
	{
		printf("저자명을 입력하시오.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("정가를 입력하시오..\n");
		scanf("%f", &library[count].value);
		pstruct[count] = &library[count];
		count++;
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("다음 타이틀을 입력하시오.\n");
	}
	printf("다음은 소장하고 있는 도서들의 목록입니다:\n");
	for (index = 0; index < count; index++)
		printf("제목 : %s 저자 : %s 가격: \%.2f\n", library[index].title,
			library[index].author, library[index].value);
	printf("다음은 타이틀의 알파벳 순으로 정렬된 목록입니다:\n");
	sort_title(pstruct, count);
	for (index = 0; index < count; index++)
		printf("제목 : %s 저자 : %s 가격: \%.2f\n", pstruct[index]->title,
			pstruct[index]->author, pstruct[index]->value);
	sort_value(pstruct, count);
	printf("다음은 가격의 오름차순으로 정렬된 목록입니다:\n");
	for (index = 0; index < count; index++)
		printf("제목 : %s 저자 : %s 가격: \%.2f\n", pstruct[index]->title,
			pstruct[index]->author, pstruct[index]->value);
	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); 
		if (find)
			*find = '\0'; 
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
void sort_title(struct book* pb[], int n)
{
	int top, search;
	struct book* temp;
	for (top = 0; top < n - 1; top++)
		for (search = top + 1; search < n; search++)
			if (strcmp(pb[search]->title, pb[top]->title) < 0)
			{
				temp = pb[search];
				pb[search] = pb[top];
				pb[top] = temp;
			}
}
void sort_value(struct book* pb[], int n)
{
	int top, search;
	struct book* temp;
	for (top = 0; top < n - 1; top++)
		for (search = top + 1; search < n; search++)
			if (pb[search]->value<pb[top]->value)
			{
				temp = pb[search];
				pb[search] = pb[top];
				pb[top] = temp;
			}
}
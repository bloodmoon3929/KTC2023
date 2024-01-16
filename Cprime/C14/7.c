#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char* s_gets(char* st, int n);
int empty(struct book library[], int size);

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    bool del;
};
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, emptyindex, filecount;
    FILE* pbooks;
    int size = sizeof(struct book);
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("book.dat 파일을 열 수 없습니다.\n", stderr);
        exit(1);
    }
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
        count++;
    for (index = 0; index < count; index++)
    {
        if (!library[index].del)
        {
            printf("\"%s\" 도서에 대해 선택하세요:\n", library[index].title);
            puts("1) 삭제 2) 수정 3) 다음 레코드");
            int choice;
            if (scanf("%d", &choice) != 1)
                break;

            switch (choice)
            {
            case 1:
                library[index].del = true;
                break;
            case 2:
                puts("새로운 제목을 입력하시오.");
                s_gets(library[index].title, MAXTITL);
                puts("새로운 저자명을 입력하시오.");
                s_gets(library[index].author, MAXAUTL);
                puts("새로운 정가를 입력하시오.");
                scanf("%f", &library[index].value);
                while (getchar() != '\n')
                    continue;
                break;
            default:
                break;
            }
        }
    }
    if (count == MAXBKS)
    {
        fputs("book.dat파일이 가득 찼다.", stderr);
        exit(2);
    }
    puts("새 도서 제목을 입력하시오.");
    puts("끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.");
    
    while (count < MAXBKS)
    {
        if (s_gets(library[count].title, MAXTITL) == NULL || library[count].title[0] == '\0')
            break;
        emptyindex = empty(library, MAXBKS);
        if (emptyindex == -1)
        {
            puts("저자명을 입력하시오.");
            s_gets(library[count].author, MAXAUTL);
            puts("정가를 입력하시오.");
            scanf("%f", &library[count].value);
            library[count].del = false;
        }
        else
        {
            puts("저자명을 입력하시오.");
            s_gets(library[emptyindex].author, MAXAUTL);
            puts("정가를 입력하시오.");
            scanf("%f", &library[emptyindex].value);
            library[emptyindex].del = false;
        }
        while (getchar() != '\n')
            continue;
        count++;
        if (count < MAXBKS)
            puts("다음 타이틀을 입력하시오.");
    }
    rewind(pbooks);
    for (index = 0; index < count; index++)
        fwrite(&library[index], size, 1, pbooks);
    fclose(pbooks);
    puts("다음은 소장하고 있는 도서들의 목록입니다:");
    for (index = 0; index < count; index++)
    {
        if (!library[index].del)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
    }
    puts("끝.\n");
    return 0;
}
char* s_gets(char* st, int n)
{
    char* ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        char* newline = strchr(st, '\n');
        if (newline)
        {
            *newline = '\0';
        }
    }
    return ret_val;
}
int empty(struct book library[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (library[i].del)
            return i;
    }
    return -1;
}
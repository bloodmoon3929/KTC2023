#include<stdio.h>
#include<stdbool.h>

char* mystrchr(char[], char);

int main(void)
{
    char arr[100];
    char text, ch;
    int i = 0;
    while (true)
    {
        printf("문자열을 입력하시오 (EOF 입력 시 종료): ");
        while ((ch = getchar()) != '\n' && ch != EOF && i < sizeof(arr) - 1) 
            arr[i++] = ch;
        arr[i] = '\0';
        if (ch == EOF)
            break;
        printf("문자를 입력하시오: ");
        text = getchar();
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        if (text == EOF) break;
        char* result = mystrchr(arr, text);
        if (result != NULL)
            printf("문자 '%c'가 발견되었습니다. 위치: %td\n", text, result - arr);
        else
            printf("문자 '%c'를 찾을 수 없습니다.\n", text);

        i = 0;
    }
    return 0;
}
char* mystrchr(char* arr, char text)
{
    while (*arr != '\0')
    {
        if (*arr == text)
            return arr;
        arr++;
    }
    return NULL;
}
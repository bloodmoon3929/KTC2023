#include <stdio.h>
#include <string.h>
char* mystrncpy(char[], const char[], int);
int main(void)
{
    char origin_arr[30];
    char copied_arr[30];
    int num;
    while (1)
    {
        printf("문자열을 입력하시오 (EOF 입력시 종료): ");
        if (fgets(origin_arr, sizeof(origin_arr), stdin) == NULL)
            break;
        origin_arr[strcspn(origin_arr, "\n")] = '\0';
        printf("몇 번 반복할 것인지 입력하시오: ");
        scanf("%d", &num);
        getchar();
        printf("복사 후 배열: %s\n", mystrncpy(copied_arr, origin_arr, num));
    }
    return 0;
}
char* mystrncpy(char* copied, const char* origin, int num)
{
	int i,count=0;
	int index_len = strlen(origin);
	for (i = 0; i < index_len*num; i++)
	{
		if (count>=index_len) count = 0;
		if (i == 30)break;
		copied[i] = origin[count];
		count++;
	}
	if (i < 30)for (; i < 30; i++)copied[i] = '\0';
	return copied;
}
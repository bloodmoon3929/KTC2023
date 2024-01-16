#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char* pc[100];
	char temp[100]="I enjoy doing this exersice";
	int* pi;
	int i = 0, words, count = 0;
	printf("How many words do you wish to enter? ");
	scanf("%d", &words);
	while (getchar() != '\n');
	printf("Enter %d words now:\n", words);
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = '\0';
	char* record_pc = strtok(temp, " ");
	printf("Here are your words:\n");
	while (record_pc != NULL && i < words)
	{
		pc[i] = (char*)malloc(strlen(record_pc) + 1);
		strcpy(pc[i], record_pc);
		record_pc = strtok(NULL, " \n");
		i++;
	}
	for (int i = 0; i < words; i++)
	{
		printf("%s\n", pc[i]);
		free(pc[i]);
	}
	return 0;
}
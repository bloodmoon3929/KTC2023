#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
struct airlines {
	int seat;
	int state;
	char firstname[100];
	char lastname[100];
};
char a(void);
char b(void);
char c(void);
char d(void);
char e(void);

int main(void)
{
    FILE* fp;
	char mode;
	struct airlines data[12];
	char words[100];
	int count = 0,num,state_count = 0;;
	if ((fp = fopen("wordy", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"wordy\" 파일을 열 수 없습니다.\n");
		exit(EXIT_FAILURE);
	}
	rewind(fp);
	while (fgets(words, 100, fp) != NULL)
		count++;
	rewind(fp);


	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%3d: %s\n", ++count, words);
	puts("파일 내용:");
	
	

	printf("a) 비어 있는 좌석의 수, b) 비어 있는 좌석 목록\n");
	printf("c) 예약된 좌석을 고객의 이름의 알파벳순으로 나열\n");
	printf("d) 좌석 예약, e) 예약취소, f) 프로그램 종료\n");
    while (scanf("%c", &mode)==1)
    {
		switch (mode) {
		case 'a':
			printf("%d\n", 12 - count);
			break;
		case 'b':
			state_count = 0;
			rewind(fp);
			while (fgets(words, 100, fp) != NULL)
			{
				if (data[state_count].state)
				{
					fputs(words, stdout);
				}
				state_count++;
			}
            break;
        case 'c':
            printf("Variable is c.\n");
            break;
        case 'd':
			print("예매할 좌석을 선택하시오\n");
			scanf("%d",&num);
			for (int i = 0; i < 12; i++)
			{
				if (data[i].seat == num)
				{
					print("이미 예매된 좌석입니다.\n");
					break;
				}
			}
			fprintf(fp, "%3d: %s\n", ++count, words);
            break;
        case 'e':
            printf("Variable is e.\n");
            break;
        case 'f':
            printf("Variable is f.\n");
            return 0;
        default:
            printf("Variable is not among a, b, c, d, e, f.\n");
        }
    }
	if (fclose(fp) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");
	return 0;
}

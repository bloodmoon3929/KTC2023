#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
struct airlines {
	int seat;
	int state;
	char firstname[100];
	char lastname[100];
};
void empty_count(struct airlines seat[]);
void empty_show(struct airlines seat[]);
void customer_alp(struct airlines seat[]);
void sort_alp(struct airlines seat[]);
void reservation(struct airlines seat[]);
void cancel(struct airlines seat[]);
char* s_gets(char* st, int n);

int main(void)
{
    FILE* fp;
	char mode;
	struct airlines data[12] = {0};
	if ((fp = fopen("airline.txt", "rb")) == NULL)
	{
		for (int i = 0; i < 12; i++)
		{
			data[i].state = 0;
			data[i].seat = i + 1;
		}
	}
	else
	{
		fread(data,sizeof(struct airlines),12,fp);
		fclose(fp);
	}
	printf("a) 비어 있는 좌석의 수, b) 비어 있는 좌석 목록\n");
	printf("c) 예약된 좌석을 고객의 이름의 알파벳순으로 나열\n");
	printf("d) 좌석 예약, e) 예약취소, f) 프로그램 종료\n");
    while (scanf(" %c", &mode)==1&&mode!='f')
    {
		switch (mode) {
		case 'a':
			empty_count(data);
			break;
		case 'b':
			empty_show(data);
            break;
        case 'c':
			customer_alp(data);
            break;
        case 'd':
			reservation(data);
            break;
        case 'e':
			cancel(data);
            break;
        default:
            printf("선택이 잘못되었습니다.\n");
        }
		printf("a) 비어 있는 좌석의 수, b) 비어 있는 좌석 목록\n");
		printf("c) 예약된 좌석을 고객의 이름의 알파벳순으로 나열\n");
		printf("d) 좌석 예약, e) 예약취소, f) 프로그램 종료\n");
    }
	if ((fp = fopen("airline.txt", "wb")) == NULL)
	{
		printf("데이터를 저장할 수 없습니다.");
	}
	else
	{
		fwrite(data, sizeof(struct airlines), 12, fp);
		fclose(fp);
	}
	return 0;
}
void empty_count(struct airlines seat[])
{
	int count = 0;
	for (int i = 0; i < 12; i++)
		if (seat[i].state == 0)
			count++;
	printf("%d개의 빈 자리가 있습니다\n", count);
}
void empty_show(struct airlines seat[])
{
	for (int i = 0; i < 12; i++)
		if (seat[i].state == 0)
			printf("%d, ",seat[i].seat);
	printf("의 자리가 비여있습니다.\n");
}
void customer_alp(struct airlines seat[])
{
	struct airlines tem[12];
	for (int i = 0; i < 12; i++)
		tem[i] = seat[i];
	sort_alp(tem);
	for (int i = 0; i < 12; i++)
		if (tem[i].firstname[0] != '\0')
			printf("%d 좌석의 %s %s\n", tem[i].seat,tem[i].firstname, tem[i].lastname);
	printf("의 고객이 예약하였습니다.\n");
}
void sort_alp(struct airlines seat[])
{
	int top, search;
	struct airlines temp;
	for (top = 0; top < 11; top++)
		for (search = top + 1; search < 12; search++)
			if (strcmp(seat[search].firstname, seat[top].firstname) < 0)
			{
				temp = seat[search];
				seat[search] = seat[top];
				seat[top] = temp;
			}
}
void reservation(struct airlines seat[])
{
	int list[12];
	int count = 0,choose,break_c=0;
	for (int i = 0; i < 12; i++)
		if (seat[i].state == 0)
		{
			list[count] = seat[i].seat;
			count++;
		}
	for (int i = 0; i < count; i++)
		printf("%d, ",list[i]);
	printf("위 좌석중 원하는 좌석을 고르시오.\n");
	while(1)
	{
		scanf("%d",&choose);
		while (getchar() != '\n')
			continue;
		for (int i = 0; i < count; i++)
		{
			if (choose == list[i]);
				break_c = 1;
		}
		if (break_c == 1)
			break;
		printf("다시 정해주세요.");
	}
	printf("이름을 입력해주세요.\n");
	s_gets(seat[choose-1].firstname,20);
	printf("성을 입력해주세요.\n");
	s_gets(seat[choose - 1].lastname, 20);
	printf("%d좌석의 %s %s",seat[choose-1].seat,
		seat[choose-1].firstname,seat[choose-1].lastname);
	printf("입력된 정보로 예약하겠습니까?(동의시 y입력, 그외 입력시 취소).\n");
	if (getchar() == 'y')
	{
		seat[choose - 1].state = 1;
		printf("예약되었습니다.\n");
	}
	else
		printf("예약취소되었습니다.\n");
}
void cancel(struct airlines seat[])
{
	int list[12];
	int count = 0, choose, break_c=0;
	for (int i = 0; i < 12; i++)
		if (seat[i].state == 1)
		{
			list[count] = seat[i].seat;
			count++;
		}
	for (int i = 0; i < count; i++)
		printf("%d, ", list[i]);
	printf("위 좌석중 취소하고자하는 좌석을 고르시오.\n");
	while (1)
	{
		scanf("%d", &choose);
		while (getchar() != '\n')
			continue;
		for (int i = 0; i < count; i++)
		{
			if (choose == list[i]);
				break_c=1;
		}
		if (break_c == 1)
		{
			break;
		}
		printf("다시 정해주세요.");
	}
	printf("%d좌석의 %s %s", seat[choose - 1].seat,
		seat[choose - 1].firstname, seat[choose - 1].lastname);
	printf("입력된 정보를 취소하겠습니까?(동의시 y입력, 그외 입력시 취소).\n");
	if (getchar() == 'y')
	{
		seat[choose - 1].state = 0;
		printf("예약취소 되었습니다.\n");
	}
	else
		printf("입력이 취소되었습니다.\n");
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
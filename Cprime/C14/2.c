#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct month {
	char name[10];
	char abbrev[4];
	int days;
	int mon_num;
};
const struct month months[12] = {
 {"January", "Jan", 31, 1},{"February", "Feb", 28, 2},
 {"March", "Mar", 31, 3}, {"April", "Apr", 30, 4},
 {"May", "May", 31, 5}, {"June", "Jun", 30, 6},
 {"July", "Jul", 31, 7}, {"August", "Aug", 31, 8},
 {"September", "Sep", 30, 9},{"October", "Oct", 31, 10},
 {"November", "Nov", 30, 11},{"December", "Dec", 31, 12}
};
int days(char* mon,int day);
int main(void)
{
	char month[10];
	int day;
	int daytotal=0;
	while (daytotal<=0)
	{
		printf("년 월 일을 입력하세요: ");
		scanf_s("%*d %9s %d", month,10, &day);
		daytotal = days(month, day);
	}
	printf("해당 기간까지의 날짜의 합산은 : %d", daytotal);
	return 0;
}
int days(char* mon,int day)
{
	int total = 0;
	int mon_num = 0;
	int num=0;
	int i;
	if (isalpha(mon[0]))
	{
		mon[0] = toupper(mon[0]);
		for (i = 1; mon[i] != '\0'; i++)
			mon[i] = tolower(mon[i]);
	}
	else
		num = atoi(mon);
	for (i = 0; i < 12; i++)
	{
		if (strcmp(mon, months[i].name) == 0)
		{
			mon_num = months[i].mon_num;
			break;
		}
		if (strcmp(mon, months[i].abbrev) == 0)
		{
			mon_num = months[i].mon_num;
			break;
		}
		if (num== months[i].mon_num)
		{
			mon_num = months[i].mon_num;
			break;
		}
	}
	for (i = 0; i < mon_num; i++)
		total += months[i].days;
	total-= months[--i].days;
	total += day;
	return total;
}
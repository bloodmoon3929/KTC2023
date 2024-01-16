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
 {"January", "Jan", 31, 1}, {"February", "Feb", 28, 2},
 {"March", "Mar", 31, 3}, {"April", "Apr", 30, 4},
 {"May", "May", 31, 5}, {"June", "Jun", 30, 6},
 {"July", "Jul", 31, 7}, {"August", "Aug", 31, 8},
 {"September", "Sep", 30, 9}, {"October", "Oct", 31, 10},
 {"November", "Nov", 30, 11}, {"December", "Dec", 31, 12}
};
int days(char* mon);
int main(void)
{
	char input[20];
	int daytotal=0;
	while (daytotal==0)
	{
		printf("정확한 월의 이름을 기입하시오: ");
		scanf_s("%19s", input,20);
		daytotal = days(input);
	}
	printf("해당 월까지의 날짜의 합산은 : %d", daytotal);
	return 0;
}
int days(char* mon)
{
	int total = 0;
	int mon_num = 0;
	int i;
	mon[0] = toupper(mon[0]);
	for (i = 1; mon[i] != '\0'; i++)
		mon[i] = tolower(mon[i]);
	for (i = 0; i < 12; i++)
		if (strcmp(mon, months[i].name) == 0)
		{
			mon_num = months[i].mon_num;
			break;
		}
	for (i = 0; i < mon_num; i++)
		total += months[i].days;
	return total;
}
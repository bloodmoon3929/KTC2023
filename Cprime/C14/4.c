#pragma warning(disable:4996)
#include <stdio.h>
struct full_name
{
	char first_name[100];
	char middle_name[100];
	char last_name[100];
};
struct id
{
	int id_num;
	struct full_name name;
};

void show(struct id ar[], int n);
void show_data(struct id data);
int main(void)
{
	struct id citizen[5]=
	{
		{302039823,{"Robert","John","Downey"}},
		{321253412,{"Scarlett", "Ingrid", "Johansson"}},
		{123456789, {"Christopher","", "Hemsworth"}},
		{987654321,{"Thomas", "Stanley", "Holland"} },
		{192837465,{"Thomas" ,"William", "Hiddleston"}}
	};
	printf("a조건에 따른 출력결과는 다음과 같습니다 : \n");
	show(citizen,5);
	printf("\nb조건에 따른 출력결과는 다음과 같습니다 : \n");
	for (int i = 0; i < 5; i++)
		show_data(citizen[i]);
	return 0;
}
void show(struct id ar[], int n) 
{
	for (int i = 0; i < n; i++)
	{
		if (ar[i].name.middle_name[0] != '\0')
			printf("%s, %s %c. -- %d \n", 
				ar[i].name.first_name, ar[i].name.last_name, ar[i].name.middle_name[0], ar[i].id_num);
		else
			printf("%s, %s -- %d \n", 
				ar[i].name.first_name, ar[i].name.last_name, ar[i].id_num);
	}
}
void show_data(struct id data)
{
	if (data.name.middle_name[0] != '\0')
		printf("%s, %s %c. -- %d \n",
			data.name.first_name, data.name.last_name, data.name.middle_name[0], data.id_num);
	else
		printf("%s, %s -- %d \n",
			data.name.first_name, data.name.last_name, data.id_num);
}
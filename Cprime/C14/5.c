#pragma warning(disable:4996)
#include <stdio.h>
#define CSIZE 4
void score(struct student ar[],int n);
void aver(struct student ar[], int n);
void show(struct student ar[], int n);
void total_aver(struct student ar[], int n);
struct name
{
	char first_name[100];
	char last_name[100];
};
struct student
{
	struct name student;
	float grade[3];
	float aver;
};
int main(void)
{
	struct student group[CSIZE]=
	{
		{"김","상우"},{"윤","시훈"},
		{"이","강욱"},{"이","지우"}
	};
	score(group, CSIZE);
	aver(group, CSIZE);
	show(group, CSIZE);
	total_aver(group, CSIZE);
	return 0;
}
void score(struct student ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s %s의 3개의 성적을 기입하시오\n",
			ar[i].student.first_name,ar[i].student.last_name);
		for (int j = 0; j < 3; j++)
		{
			printf("%d번째 성적을 입력하시오 : ",j+1);
			scanf(" %f", &ar[i].grade[j]);
		}
	}
}
void aver(struct student ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		float sum=0;
		for (int j = 0; j < 3; j++)
			sum += ar[i].grade[j];
		ar[i].aver = sum / 3;
	}
}
void show(struct student ar[], int n) 
{
	for (int i = 0; i < n; i++)
	{
		printf("%s %s의 성적은 ",
			ar[i].student.first_name,ar[i].student.last_name);
		printf("%4.2f, %4.2f, %4.2f이며 평균은 %4.2f이다.\n",
			ar[i].grade[0],ar[i].grade[1],ar[i].grade[2],ar[i].aver);
	}
}
void total_aver(struct student ar[], int n) 
{
	float aver_score = 0;
	for (int i = 0; i < 3; i++)
	{
		float total_score = 0;
		for (int j = 0; j < n; j++)
			total_score += ar[j].grade[i];
		printf("학생들의 %d번째 점수의 평균 : %4.2f\n",i+1,total_score/n);
	}
	for (int i = 0; i < n; i++)
		aver_score += ar[i].aver;
	printf("학생들의 평균의 평균 : %4.2f\n", aver_score / n);
}
#include<stdio.h>
#include<stdlib.h>

void print_arr(int *arr);
void bubble(int arr[]);
int main(void)
{
	int record_randam[100];
	for (int i = 0; i < 100; i++) record_randam[i] = rand() % 10+1;
	printf("정렬전의 배열 : \n");
	print_arr(record_randam);
	bubble(record_randam);	
	printf("정렬후의 배열 : \n");
	print_arr(record_randam);
	return 0;
}
void print_arr(int *arr)
{
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		printf("%2d, ", *(arr+i));
		count++;
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}
	}
}
void bubble(int arr[])
{
	int temp;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 99 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
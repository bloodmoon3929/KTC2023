#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void lottery(int ar[],int ar_size,int num);
int main(void)
{
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	int choose;
	puts("몇 개를 랜덤으로 뽑을건지 결정하시오.");
	scanf_s("%d",&choose);
	lottery(array,sizeof(array)/sizeof(int),choose);
	return 0;
}
void lottery(int ar[], int ar_size, int num)
{
	int index,temp;
	srand(time(0));
	if (num > ar_size)
	{
		puts("뽑고자 하는 수보다 배열의 크기가 작음으로 배열크기만큼 뽑겠습니다.\n");
		num = ar_size;
	}
	for (int i = 0; i < num; i++)
	{
		index = rand() % (ar_size - 1); 
		temp = ar[index];
		printf("%2d ", temp); 
		ar[index] = ar[ar_size - 1];
		ar[ar_size - 1] = temp;
		ar_size--;
	}
}
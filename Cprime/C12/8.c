#include<stdio.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
	int* pa;
	int size;
	int value;
	printf("원소의 개수를 입력하시오: ");
	scanf("%d", &size);
	do
	{
		printf("초기화 값을 입력하시오: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa,size);
			free(pa);
		}
		printf("원소의 개수를 입력하시오(끝내려면 <1): ");
	} while (scanf_s("%d", &size) == 1 && size > 0);
	printf("종료.\n");
	return 0;
}
int* make_array(int elem, int val)
{
	int* parr;
	parr= (int*)malloc(elem * sizeof(int));
	for (int i = 0; i < elem; i++) parr[i] = val;
	return parr;
}
void show_array(const int ar[], int n)
{
	for (int i = 0; i < n; i ++) printf("%d ", ar[i]);
	printf("\n");
}
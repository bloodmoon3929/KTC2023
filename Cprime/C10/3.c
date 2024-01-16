#include<stdio.h>
int arr_max(int input_arr[], int input_len);
int main(void)
{
	int arr[] = {3,1,4,1,5,9,2};
	int len = sizeof(arr)/sizeof(int);
	printf("가장 큰 값은 %d입니다.", arr_max(arr, len));
	return 0;
}
int arr_max(int input_arr[], int input_len)
{
	int max=input_arr[0];
	for (int i = 1; i < input_len; i++)
	{
		if (max < input_arr[i])max=input_arr[i];
	}
	return max;
}
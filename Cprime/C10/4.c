#include<stdio.h>
int arr_max(double input_arr[], int input_len);
int main(void)
{
	double arr[] = {3.1,4.1,5.9,2.3};
	int len = sizeof(arr)/sizeof(double);
	printf("가장 큰 값의 인덱스값은 %d입니다.", arr_max(arr, len));
	return 0;
}
int arr_max(double input_arr[], int input_len)
{
	int index=0;
	double max_index=input_arr[0];
	for (int i = 1; i < input_len; i++)
	{
		if (max_index < input_arr[i])
		{
			max_index = input_arr[i];
			index = i;
		}
	}
	return index;
}
#include<stdio.h>
double arr_max(double input_arr[], int input_len);
double arr_min(double input_arr[], int input_len);
double arr_minus(double input_arr[], int input_len);
int main(void)
{
	double arr[] = {3.1,4.1,5.9,2.3};
	int len = sizeof(arr)/sizeof(double);
	printf("가장 큰 값, %g과 가장 작은 값, %g의 차는 %g입니다.", arr_max(arr, len),arr_min(arr, len),arr_minus(arr,len));
	return 0;
}
double arr_max(double input_arr[], int input_len)
{
	double max=input_arr[0];
	for (int i = 1; i < input_len; i++)
	{
		if (max < input_arr[i])max = input_arr[i];
	}
	return max;
}
double arr_min(double input_arr[], int input_len)
{
	double min = input_arr[0];
	for (int i = 1; i < input_len; i++)
	{
		if (min > input_arr[i])min = input_arr[i];
	}
	return min;
}
double arr_minus(double input_arr[], int input_len)
{
	double minus = arr_max(input_arr,input_len) - arr_min(input_arr, input_len);
	return minus;
}
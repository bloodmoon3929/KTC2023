#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
T maxn(T arr[],int n);
template <>char* maxn(char* arr[], int n);
int main()
{
	
	int i_arr[6] = {1,2,3,4,5}; 
	double d_arr[4] = {1.1,2.2,3.3,4.4};
	const char * c_arr[5] =
	{
		"P-NP 문제",
		"리만 가설",
		"푸앵카레 추측",
		"양_밀스 질량 간극 가설",
		"버치-스위너턴다이어 추측"
	};
	cout << "가장 큰 int : "<<maxn(i_arr,6) <<endl;
	cout << "가장 큰 double : " << maxn(d_arr, 4) << endl;
	cout << "가장 긴 문자열 : " << maxn(c_arr, 5) << endl;
	return 0;
}
template <typename T>
T maxn(T arr[],int n)
{
	T max=arr[0];
	for (int i = 1; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
template <>char* maxn(char *arr[], int n)
{
	char* max = arr[0];
	for (int i = 1; i < n; i++)
		if (strlen(max) < strlen(arr[i]))
			max = arr[i];
	return max;
}
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
template <typename T>
T max5(T arr[]);
template <typename T>
void print_arr(T arr[]);
int main()
{
	srand(time(0));
	int i_arr[5]; double d_arr[5];
	for (int i = 0; i < 5; i++)
	{
		i_arr[i] = rand() % 11;
		d_arr[i] = (double)(rand() % 101)/10;
	}
	cout << "int 배열" <<endl;
	print_arr(i_arr);
	cout << max5(i_arr) << endl;
	cout << "double 배열" << endl;
	print_arr(d_arr);
	cout << max5(d_arr) << endl;
	return 0;
}
template <typename T>
void print_arr(T arr[])
{
	for (int i = 0; i < 5; i++)
		cout <<i+1<<"번 index=" << arr[i]<<", ";
	cout << endl;
}
template <typename T>
T max5(T arr[])
{
	T max=arr[0];
	for (int i = 1; i < 5; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
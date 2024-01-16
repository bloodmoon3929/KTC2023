#include <iostream>
using namespace std;
int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);
int main()
{
	double array[40];
	int count = Fill_array(array, 40);
	Show_array(array, count);
	cout << endl<< "---뒤집은 뒤의 값---" << endl;
	Reverse_array(array, count);
	Show_array(array, count);
	return 0;
}
int Fill_array(double arr[], int size)
{
	int count = 0;
	cout << "원하는 정수를 "<<size <<"개 미만으로 입력하시오(정수가 아닐수 종료)" << endl;
	while (count != size && (cin >> arr[count]).good())
		count++;
	return count;
}
void Show_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] <<", ";
}
void Reverse_array(double arr[], int size)
{
	int top = -1,rear=size;
	double temp;
	while (top++ < rear--)
	{
		temp = arr[top];
		arr[top] = arr[rear];
		arr[rear] = temp;
	}
}
#include <iostream>
using namespace std;
int input(int input[]);
double average(int arr[], int count);
void output(int output[], double aver, int count);
int main()
{
	int golf[10];
	int count=input(golf);
	output(golf, average(golf, count), count);
	return 0;
}
int input(int input[]) 
{
	int count = 0;
	cout << "최대 10개의 골프 스코어를 입력하시오.(음수를 입력하여 종료)"<<endl;
	while (count != 10)
	{
		cout << count+1 << "번째의 스코어를 입력하시오 :";
		cin >> input[count];
		if (input[count]<0)
			break;
		count++;
	}	
	return count;
}
double average(int arr[], int count)
{
	double sum = 0;
	for (int i = 0; i < count; i++)
		sum += arr[i];
	return sum / count;
}
void output(int output[],double aver ,int count)
{
	for (int i = 0; i < count; i++)
		cout << 1 << "번째의 스코어의 값은  :"<<output[i]<<endl;
	cout<< "평균 값은  :" << aver;
}
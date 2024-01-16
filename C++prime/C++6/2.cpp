#include<iostream>
#include<cctype>
using namespace std;
int main(void)
{
	int count=0,count_up=0;
	double num, aver=0;
	double give[10];
	cout << "10개의 기부금을 입력하시오.(숫자가 아닐시 종료)" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (cin>>num)
		{
			give[i] = num;
			count++;
		}
		else
			break;
	}
	for (int i = 0; i < count; i++)
		aver += give[i];
	aver /= count;
	for (int i = 0; i < count; i++)
		if (aver < give[i])
			count_up++;
	cout <<"평균 "<<aver<<"보다 많이 기부한 건은 "<< count_up << "회입니다.";
	return 0;
}
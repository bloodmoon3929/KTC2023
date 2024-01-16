#include<iostream>
using namespace std;
int main(void)
{
	double num, sum=0;
	do 
	{
		cout << "임의의 수를 입력하시오(0 입력시 종료)" << endl;
		cin >> num;
		sum += num;
		cout << "누계 = " << sum<<endl;
	} while (num!=0);
	
	return 0;
}
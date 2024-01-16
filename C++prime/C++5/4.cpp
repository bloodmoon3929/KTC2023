#include<iostream>
using namespace std;
int main(void)
{
	unsigned int A_money = 100000, B_money = 100000, A_interest = 0;
	int count = 0;
	do
	{
		A_interest += A_money * 0.1;
		B_money = static_cast<int>(B_money * 1.05);
		count++;
	} while ((A_money + A_interest) > B_money);
	cout << count << "년 기준 A의 자산은 = " << A_money + A_interest << endl;
	cout << count << "년 기준 B의 자산은 = " << B_money << endl;
	return 0;
}
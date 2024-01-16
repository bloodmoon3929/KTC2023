#include<iostream>
using namespace std;
int main(void)
{
	int age;
	cout << "Enter your age : ";
	cin >> age;
	cout << "이때 당신의 나이를 월수로 나타낼 경우 " << age * 12 << "입니다.";
	return 0;
}
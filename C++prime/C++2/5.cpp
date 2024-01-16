#include<iostream>
using namespace std;
double c_to_f(double c);
int main(void)
{
	double degree;
	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
	cin >> degree;
	cout << "섭씨 "<<degree<< "도는 화씨로 "<< c_to_f(degree)<<"도입니다.";
	return 0;
}
double c_to_f(double c)
{
	return c * 1.8 + 32;
}
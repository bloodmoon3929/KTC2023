#include<iostream>
using namespace std;
int distance(double light_year);
int main(void)
{
	double lightyear;
	cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";
	cin >> lightyear;
	cout <<lightyear<< " 광년은 "<< distance(lightyear)<<" 천문 단위입니다.";
	return 0;
}
int distance(double light_year)
{
	return int(light_year * 63240);
}
#include<iostream>
using namespace std;
int main(void)
{
	const double KM100_TO_MILE = 62.14, L_TO_GALLON=1/3.875;

	double oil, distance;
	cout << "몇 KM 주행하였습니까 : ";
	cin >> distance;
	cout << "몇 L 소비하였습니까 : ";
	cin >> oil;
	cout << "100키로당 리터 수는 " << oil / (100 * distance) << "입니다." << endl;
	oil = oil * L_TO_GALLON;
	distance = distance * KM100_TO_MILE;
	cout << "겔런당 마일 수는 " << distance / oil << "입니다." << endl;
	return 0;
}
#include<iostream>
using namespace std;
int main(void)
{
	double ft,in,pounds;
	const double FT_TO_IN = 12, IN_TO_METER = 0.0254, POUNDS_TO_KG = 2.2;
	cout << "키를 피트 단위만 입력하십시오: ";
	cin >> ft;
	cout << "키의 나머지를 인치 단위로 입력하십시오: ";
	cin >> in;
	cout << "체중을 파운드 단위로 입력하십시오: ";
	cin >> pounds;
	double meter = (ft*FT_TO_IN+in)*IN_TO_METER;
	double kg =pounds * POUNDS_TO_KG;
	double bmi = kg / (meter*meter);
	cout << "당신의 비만 지수(BMI)는 " << bmi << "입니다.\n";
	return 0;
}
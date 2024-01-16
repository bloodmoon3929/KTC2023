#include<iostream>
#include<string>
using namespace std;
struct car_infor
{
	string manufacturer;
	int make_year;
};
int main(void)
{
	int num;
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> num;
	car_infor* car_information = new car_infor[num];
	for (int i = 0; i < num; i++)
	{
		cout << "자동차 #" << i + 1 << ":" << endl;
		cout << "제작엄체: ";
		cin >> car_information[i].manufacturer;
		cout << "제작년도: ";
		cin >> car_information[i].make_year;
	}
	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다."<<endl;
	for (int i = 0; i < num; i++)
		cout <<car_information[i].make_year<< "년형 " << car_information[i].manufacturer << endl;
	return 0;
}
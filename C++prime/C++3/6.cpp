#include<iostream>
using namespace std;
int main(void)
{
	int choose;
	double oil, distance;
	cout << "미국식은 1, 유럽식은 2를 기입하시오(다른값 기입시 종료): ";
	cin >> choose;
	while (choose== 1||choose == 2)
	{
		if (choose == 1)
		{
			cout << "몇 마일 주행하였습니까 : ";
			cin >> distance;
			cout << "몇 겔런 소비하였습니까 : ";
			cin >> oil;
			cout << "겔런당 마일 수는 " << distance/oil << "입니다."<<endl;
		}
		if (choose == 2)
		{
			cout << "몇 키로 주행하였습니까 : ";
			cin >> distance;
			cout << "몇 리터 소비하였습니까 : ";
			cin >> oil;
			cout << "100키로당 리터 수는 " << oil / (100*distance) << "입니다."<<endl;
		}
		cout << "미국식은 1, 유럽식은 2를 기입하시오(다른값 기입시 종료): ";
		cin >> choose;
	}
	return 0;
}
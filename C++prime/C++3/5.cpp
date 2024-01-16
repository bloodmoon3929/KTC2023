#include<iostream>
using namespace std;
int main(void)
{
	long long world, usa;
	cout << " 세계 인구수를 입력하시오: ";
	cin >>  world;
	cout << " 미국의 인구수를 입력하시오: ";
	cin >> usa;
	cout <<"세계 인구수에서 미국이 차지하는 비중은 "<<(double)usa/world*100<<"%이다.";
	return 0;
}
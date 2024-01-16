#include<iostream>
using namespace std;
void oclock(int time, int min);
int main(void)
{
	int t,m;
	cout << "시간 값을 입력하시오: ";
	cin >> t;
	cout << "분 값을 입력하시오: ";
	cin >> m;
	oclock(t, m);
	return 0;
}
void oclock(int time, int min)
{
	cout << "시각: " << time << ":" << min;
}
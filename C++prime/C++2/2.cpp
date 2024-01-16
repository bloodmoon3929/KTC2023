#include<iostream>
using namespace std;
int main(void)
{
	int distance;
	cout << "마일 단위의 거리를 입력하시오 : ";
	cin >> distance;
	cout << distance<<"마일은, "<<distance*1.60934<<"km입니다.";
	return 0;
}
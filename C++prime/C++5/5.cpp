#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int sum=0;
	string year[12] =
	{
		"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"
	};
	int sell[12];
	for (int i = 0; i < 12; i++)
	{
		cout << year[i] << "에 C++ for Fools책의 판매량을 기입하시오(단위는 책의 수) : ";
		cin >> sell[i];
		sum += sell[i];
	}
	cout << "1년간 판매 수익은 "<<sum<<"입니다.";
	return 0;
}
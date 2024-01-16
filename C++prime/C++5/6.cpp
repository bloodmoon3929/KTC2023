#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int total_sum = 0, year_sum=0;
	string year[12] =
	{
		"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"
	};
	int sell[3][12];
	for (int j = 0; j < 3; j++)
	{
		year_sum = 0;
		for (int i = 0; i < 12; i++)
		{
			cout <<j+1<<"년의 "<< year[i] << "에 C++ for Fools책의 판매량을 기입하시오(단위는 책의 수) : ";
			cin >> sell[j][i];
			year_sum += sell[j][i];
		}
		cout << j+1 << "년차 판매 수익은 " << year_sum << "입니다."<<endl;
		total_sum += year_sum;
	}
	cout <<"총 판매 수익은 " << total_sum << "입니다.";
	return 0;
}
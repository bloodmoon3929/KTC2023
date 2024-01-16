#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(void)
{
	double sum=0;
	vector<double> list(3);
	cout << "40미터 달리기 결과를 3회 입력하시오"<<endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> list[i];
		sum += list[i];
		cout << i+1 << "회 기록하였고, 평균은 " << sum / (i+1) << "입니다" << endl;
	}
	return 0;
}
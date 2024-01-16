#include <iostream>
using namespace std;
int main()
{
	double a, b, result;
	cout << "0이 아닌 두 수를 입력하십시오(0일시 종료) : ";
	while (cin >> a >> b,a != 0 && b != 0)
	{
		result = 2 * a * b / (a + b);
		cout <<"두 수의 조화 평균은 "<< result<<"입니다"<<endl;
		cout << "0이 아닌 두 수를 입력하십시오(0일시 종료) : ";
	}
	return 0;
}
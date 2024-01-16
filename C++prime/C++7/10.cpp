#include <iostream>
using namespace std;
double add(double x, double y);
double min(double x, double y);
double mul(double x, double y);
double div(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
int main()
{
	int cul;
	double x, y;
	double (*pf[4]) (double, double) = {add,min,mul,div};
	cout << "0이 아닌 두 수를 입력하십시오(0일시 종료) : ";
	while (cin >> x >> y, x != 0 && y != 0)
	{
		cout << "더하기를 원한다면 0, 빼기는 1, 곱하기는 2, 나누기는 3를 누르시오";
		cin >> cul;
		while (cul > 3 && cul < 0)
		{
			cout << "더하기를 원한다면 1, 빼기는 2, 곱하기는 3, 나누기는 4를 누르시오";
			cin >> cul;
		}
		cout<< calculate(x, y, pf[cul])<<endl;
		cout << "0이 아닌 두 수를 입력하십시오(0일시 종료) : ";
	}
	return 0;
}
double add(double x, double y)
{
	return x + y;
}
double min(double x, double y)
{
	return x- y;
}
double mul(double x, double y)
{
	return x* y;
}
double div(double x, double y)
{
	return x/y;
}
double calculate(double x, double y, double (*pf)(double, double))
{
	return (pf(x,y));
}
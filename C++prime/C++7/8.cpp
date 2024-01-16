#include <iostream>
#include<array>
#include<string>
using namespace std;
const int Seasons = 4;
const char* Sname[Seasons] = { "Spring","Summer","Fall","Winter"};
struct pay
{
	double season[Seasons];
};
void fill(array<double, Seasons>* pa);
void show(array<double, Seasons> pa);
void fill(pay* pa);
void show(pay pa);
int main()
{
	array<double, Seasons> expenses_a;
	struct pay expenses_b;
	fill(&expenses_a);
	show(expenses_a);
	fill(&expenses_b);
	show(expenses_b);

	return 0;
}
void fill(array<double,Seasons> *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << "에 소모되는 비용:";
		cin >> (*pa)[i];
	}
}
void fill(pay *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << "에 소모되는 비용:";
		cin >> pa->season[i];
	}
}
void show(array<double, Seasons> pa)
{
	double total = 0.0;
	cout << endl << "계절별 비용(array 객체)" << endl;
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << " : $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "총 비용 : $" << total << endl<<endl;
}
void show(pay pa)
{
	double total = 0.0;
	cout << endl << "계절별 비용(구조체 멤버 배열)" << endl;
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << " : $" << pa.season[i] << endl;
		total += pa.season[i];
	}
	cout << "총 비용 : $" << total << endl;
}
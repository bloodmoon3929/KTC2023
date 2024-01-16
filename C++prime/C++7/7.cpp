#include <iostream>
using namespace std;
const int MAX = 5;
double *fill_array(double* start, double* end);
void show_array(double* start, double* end);
void revalue_array(double* start, double* end);
int main()
{
	double properties[MAX];
	double *size = fill_array(properties, properties + MAX);
	show_array(properties, size);
	revalue_array(properties, size);
	show_array(properties, size);
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
double *fill_array(double* start, double* end)
{
	double* pstart;
	double temp;
	for (pstart=start; pstart < end; pstart++)
	{
		cout << (pstart-start + 1) << "번 부동산의 가격: $";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다." << endl;
			break;
		}
		else if (temp < 0)
			break;
		*pstart = temp;
	}
	return pstart;
}
void show_array(double* start, double* end)
{
	const double* pstart;
	for (pstart=start; pstart < end; pstart++)
		cout << (pstart-start+1) << "번 부동산: $" << *pstart << endl;
}
void revalue_array(double* start, double* end)
{
	double r;
	double* pstart;
	cout << "재평가율을 입력하십시오: ";
	while (!(cin >> r))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "잘못 입력했습니다, 수치를 입력하세요: ";
	}
	for (pstart = start; pstart < end; pstart++)
		*pstart *= r;
}
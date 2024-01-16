#include<iostream>
#include "4a.h"
using namespace std;
int main()
{
	using namespace SALES;
	Sales tmp;
	double array[QUARTERS] = { 11.1,22.2,33.3,44.4 };
	Sales person_a(tmp, array, 4);
	person_a.showSales();
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << i + 1 << "분기 판매액: ";
		cin >> array[i];
	}
	Sales person_b(person_a, array, 4);
	person_b.showSales();
	return 0;
}
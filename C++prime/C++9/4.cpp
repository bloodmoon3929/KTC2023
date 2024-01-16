#include<iostream>
#include "4a.h"
using namespace std;
int main()
{
	using namespace SALES;
	Sales monitering;
	setSales(monitering);
	showSales(monitering);
	double array[QUARTERS] = { 11.1,22.2,33.3,44.4 };
	setSales(monitering,array,3);
	showSales(monitering);
	return 0;
}
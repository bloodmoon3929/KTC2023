#include<iostream>
#include "4a.h"
using namespace std;
namespace SALES
{
	Sales::Sales()
	{
		double sales[QUARTERS] = {0,0,0,0};
		double average=0;
		double max=0;
		double min=0;
	}
	Sales::Sales(Sales& s, const double ar[], int n)
	{
		for (int j = 0; j < 4; j++)
			this->sales[j] = 0;
		double total = 0;
		if (n > 4)
			n = 4;
		this->max = ar[0];
		this->min = ar[0];
		for (int i = 0; i < n; i++)
		{
			this->sales[i] = ar[i];
			if (this->max < ar[i])
				this->max = ar[i];
			if (this->min > ar[i])
				this->min = ar[i];
			total += ar[i];
		}
		this->average = total / n;
	}
	void Sales::showSales()
	{
		cout << "1분기,	2분기,	3분기,	4분기" << endl;
		for (int i = 0; i < 4; i++)
		{
			if (this->sales[i] == 0)
				cout << "empty	";
			else
				cout << this->sales[i] << "	";
		}
		cout << endl;
		cout << "최댓값 : " << this->max << endl;
		cout << "최솟값 : " << this->min << endl;
		cout << "평균값 : " << this->average << endl;
	}
}
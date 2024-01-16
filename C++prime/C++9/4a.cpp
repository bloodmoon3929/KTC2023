#include<iostream>
#include "4a.h"
using namespace std;
namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		for (int j = 0; j < 4; j++)
			s.sales[j] = 0;
		double total = 0;
		if (n > 4)
			n = 4;
		s.max = ar[0];
		s.min = ar[0];
		for (int i=0; i < n; i++)
		{
			s.sales[i] = ar[i];
			if (s.max < ar[i])
				s.max = ar[i];
			if (s.min > ar[i])
				s.min = ar[i];
			total += ar[i];
		}
		s.average = total / n;
	}
	void setSales(Sales& s)
	{
		cout << "1분기 판매액을 기입해주세요. : ";
		cin >> s.sales[0];
		s.max =s.sales[0];
		s.min =s.sales[0];
		double total = s.sales[0];
		for (int i=1; i < 4; i++)
		{
			cout << i + 1 << "분기 판매액을 기입해주세요. : ";
			cin >> s.sales[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			if (s.min > s.sales[i])
				s.min = s.sales[i];
			total += s.sales[i];
		}
		s.average = total / 4;
	}
	void showSales(const Sales& s)
	{
		cout << "1분기,	2분기,	3분기,	4분기" <<endl;
		for (int i = 0; i < 4; i++)
		{
			if (s.sales[i] == 0)
				cout << "empty	";
			else
				cout << s.sales[i] << "	";
		}
		cout<< endl;
		cout << "최댓값 : " << s.max << endl;
		cout << "최솟값 : " << s.min << endl;
		cout << "평균값 : " << s.average << endl;
	}
}
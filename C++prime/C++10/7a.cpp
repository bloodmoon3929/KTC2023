#include <iostream>
#include <cstring>
using namespace std;
#include "7a.h"
Plorg::Plorg(const char * name, int n)
{
	strncpy_s(ci_name, name, 19);
	ci_name[20] = '\0';
	ci = n;
};
void Plorg::change(int n)
{
	ci = n;
};
void Plorg::show() const
{
	cout << "플로그의 이름: " << ci_name << endl;
	cout << "만족 지수: " << ci << endl;
}
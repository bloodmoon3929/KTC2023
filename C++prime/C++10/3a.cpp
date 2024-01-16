#include<iostream>
#include<cstring>
#include "3a.h"
using namespace std;
Golf::Golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}
int Golf::setgolf()
{
	cout << "사용자의 이름을 입력해 주세요 : ";
	cin.getline(fullname, LEN);
	if (fullname[0] == '\0')
		return 0;
	cout << "사용자의 핸디캡을 입력해 주세요(정수형) : ";
	while (!(cin >> handicap))
	{
		cout << "정수형 입력이 아닙니다. 재입력해주십시오 : " << endl;
		cin.clear();
	}
	while (cin.get() != '\n')
		continue;
	return 1;
}
void Golf::sethandicap(int hc)
{
	handicap = hc;
}
void Golf::showgolf() const
{
	cout <<"사용자의 이름 : " << fullname << endl;
	cout << "사용자의 핸디캡 : " << handicap << endl;
}
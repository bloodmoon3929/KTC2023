#include<iostream>
#include<cstring>
#include "1a.h"
using namespace std;
void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g)
{
	cout << "사용자의 이름을 입력해 주세요 : ";
	cin.getline(g.fullname,LEN);
	if (g.fullname[0] == '\0')
		return 0;
	cout << "사용자의 핸디캡을 입력해 주세요(정수형) : ";
	while (!(cin >> g.handicap))
	{
		cout << "정수형 입력이 아닙니다. 재입력해주십시오 : " << endl;
		cin.clear();
	}
	while (cin.get() != '\n')
		continue;
	return 1;
}
void handicap(golf& g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf& g)
{
	cout <<"사용자의 이름 : " << g.fullname << endl;
	cout << "사용자의 핸디캡 : " << g.handicap << endl;
}
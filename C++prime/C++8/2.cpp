#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
	char name[300];
	double mass;
	int cal;
};
void input(CandyBar& information, const char* pname = "Millennium Much", double weight = 2.85, int callorie = 350);
void output(CandyBar information);
int main()
{
	struct CandyBar infor;
	input(infor);
	output(infor);
	input(infor, "롯대제과", 4.0);
	output(infor);
	input(infor, "농심", 312, 33);
	output(infor);
	return 0;
}
void input(CandyBar& information, const char* pname, double weight, int callorie)
{
	strcpy(information.name, pname);
	information.mass = weight;
	information.cal = callorie;
}
void output(CandyBar information)
{
	cout << "제조사 : " << information.name;
	cout << ", 중량 : " << information.mass;
	cout << ", 칼로리 : " << information.cal << endl;
}
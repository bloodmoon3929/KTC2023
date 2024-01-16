#include<iostream>
#include<vector>
#define strsize 123
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
using namespace std;
int main(void)
{
	char ch;
	vector<bop> member = { {"전두환","11~12대","탱크",0},{"김대중","15대","DJ",1},{"이승만","1~3대","우남선생",2},{"노태우","13대","물태우",1},{"박정희","5~9대","불도저",1} };
	int size = member.size();
	cout << "Benevolent Order of Programmers"<<endl;
	cout << "a. 실명으로 열람			b. 직함으로 열람" << endl;
	cout << "c. BOP 아이디로 열람			d. 회원이 지정한 것으로 열람" << endl;
	cout << "q. 종료" << endl;
	cout << "원하는 것을 입력하십시오: ";
	cin >> ch;
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < size; i++)
				cout << member[i].fullname<<endl;
			break;
		case 'b':
			for (int i = 0; i < size; i++)
				cout << member[i].title<<endl;
			break;
		case 'c':
			for (int i = 0; i < size; i++)
				cout << member[i].bopname<<endl;
			break;
		case 'd':
			for (int i = 0; i < size; i++)
			{
				if (member[i].preference == 0)
					cout << member[i].fullname<<endl;
				else if (member[i].preference == 1)
					cout << member[i].title<<endl;
				else if (member[i].preference == 2)
					cout << member[i].bopname<<endl;
				else
					cout << "잘못된 입력입니다.";
			}
			break;
		default:
			break;
		}
		cout << "원하는 것을 입력하십시오: ";
		cin >> ch;
	}
	cout << "프로그램을 종료합니다.";
	return 0;
}
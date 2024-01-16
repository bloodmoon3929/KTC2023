#include<iostream>
#include<string>
const int ArSize = 10;
using namespace std;
void strcount(string str);
int main()
{
	string input;
	cout << "영문으로 한 행을 입력하십시오 : " << endl;
	while (getline(cin,input))
	{
		if (input == "")
			break;
		strcount(input);
		cout << "다음 행을 입력하십시오 (끝내려면 빈 행을 입력) : " << endl;
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
void strcount(string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"에는 ";
	while (str[count++])
		continue;
	count--;
	total += count;
	cout << count << "개의 문자가 있습니다."<<endl;
	cout << "지금까지 총" << total << "개의 문자를 입력하셨습니다." << endl;
}
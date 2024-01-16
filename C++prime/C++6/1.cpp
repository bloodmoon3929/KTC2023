#include<iostream>
#include<cctype>
using namespace std;
int main(void)
{
	char ch;
	cout << "영어 문장을 입력하시오(@로 종료)"<<endl;
	cin.get(ch);
	while (ch != '@')
	{
		if (isupper(ch))
			cout.put(tolower(ch));
		else
			cout.put(toupper(ch));
		cin.get(ch);
	}
	return 0;
}
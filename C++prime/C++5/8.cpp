#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char done[300];
	int count = 0;
	cout << "영어 단어들을 입력하시오 (끝내려면 done을 입력) :"<<endl;
	while (cin >> done&&strcmp("done", done))
		++count;
	cout << "총 " << count << " 단어가 입력되었습니다.";
	return 0;
}
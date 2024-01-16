#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string done;
	int count = 0;
	cout << "영어 단어들을 입력하시오 (끝내려면 done을 입력) :"<<endl;
	while (done != "done")
	{
		cin >> done;
		count++;
	}
	cout << "총 " << count-1 << " 단어가 입력되었습니다.";
	return 0;
}
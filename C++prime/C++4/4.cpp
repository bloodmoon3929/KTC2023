#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string first, last, full;
	cout << "퍼스트 네임(이름)을 입력하시오: ";
	getline(cin,first);
	cout << "라스트 네임(성)을 입력하시오: ";
	getline(cin,last);
	full = last;
	full.append(", ");
	full.append(first);
	cout << "하나의 문자열로 만들면: "<< full << endl;
	return 0;
}
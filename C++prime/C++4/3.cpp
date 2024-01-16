#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char first[20];
	char last[20];
	char full[41];
	cout << "퍼스트 네임(이름)을 입력하시오: ";
	cin.getline(first, 20);
	cout << "라스트 네임(성)을 입력하시오: ";
	cin.getline(last, 20);
	strcpy(full, last);
	strcat(full, ", ");
	strcat(full, first);
	cout << "하나의 문자열로 만들면: "<< full << endl;
	return 0;
}
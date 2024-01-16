#include<iostream>
using namespace std;
int main(void)
{
	char grade;
	char first[20];
	char last[20];
	int age;
	cout << "영문 퍼스트 네임(이름) : ";
	cin.getline(first,20);
	cout << "영문 라스트 네임(성) : ";
	cin.getline(last, 20);
	cout << "학생이 원하는 학점 : ";
	cin>>grade;
	cout << "나이 : ";
	cin>>age;
	cout << "성명: " << last << ", " << first<<endl;
	cout <<"학점: "<< (char)(grade + 1)<<endl;
	cout << "나이: " << age;
	return 0;
}
#include <iostream>
#include<cstring>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
int main()
{
	cout << "학급의 학생 수를 입력하시오: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
int getinfo(student pa[], int n)
{
	int count = 0;
	while (count != n)
	{
		cout << count + 1 << "번째의 학생의 이름을 입력하시오 :";
		cin.getline(pa[count].fullname,SLEN);
		if (strcmp(pa[count].fullname,"")==0)
			break;
		cout << "취미를 입력하시오 :";
		cin.getline(pa[count].hobby, SLEN);
		cout << "opplevel을 입력하시오 :";
		(cin>>pa[count].ooplevel).get();
		count++;
	}
	return count;
}
void display1(student st)
{
	cout << "display1"<< endl;
	cout <<"이름 : "<< st.fullname;
	cout <<",취미 : "<< st.hobby;
	cout <<",opplevel : "<< st.ooplevel << endl;
}
void display2(const student* ps)
{
	cout << "display2" << endl;
	cout << "이름 :" << ps->fullname;
	cout << "취미 : " << ps->hobby;
	cout << "opplevel : " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "display3" << endl;
		cout << "이름 : " << pa[i].fullname;
		cout << "취미 : " << pa[i].hobby;
		cout << "opplevel : " << pa[i].ooplevel << endl;
	}
}
#include<iostream>
#include<cctype>
using namespace std;
void menu(void);
int main(void)
{
	double ch,tax;
	menu();
	while (cin>>ch&&ch>0)
	{
		if (ch <= 5000)
			tax = ch * 0.0;
		else if (ch <= 10000)
			tax = (ch - 5000) * 0.1;
		else if (ch <= 20000)
			tax = 500 + (ch - 10000) * 0.15;
		else if (ch <= 35000)
			tax = 2000 + (ch - 20000) * 0.15;
		else
			tax = 4250 + (ch - 35000) * 0.2;
		cout << "\n세금은 " << tax << "트바페 입니다" << endl;
		menu();
	}
	cout << "프로그램을 종료합니다.";
	return 0;
}
void menu(void)
{
	cout << "소득을 입력하면 세금을 계산해드립니다." << endl;
	cout << "5,000 트바프까지는 0%, 10,000 트바프까지는 10%" << endl;
	cout << "20,000 트바프까지는 15%, 35,000 트바프이상의 경우 20%의 세금을 메깁니다." << endl;
	cout << "소득을 입력하십시오(양수가 아닌 값을 입력시 종료): ";
}
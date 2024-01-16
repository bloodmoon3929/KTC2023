#include<iostream>
#include "1a.h"
using namespace std;
BankAccount::BankAccount(const char* client, const char* num, double bal)
{
	strcpy_s(name,client);
	strcpy_s(acctnum,num);
	balance = bal;
}
void BankAccount::show(void) const
{
	cout << "성명 : " << name << endl;
	cout << "계좌 : " << acctnum << endl;
	cout << "잔액 : " << balance << endl;
	cout << "------------------------" << endl;
}
void  BankAccount::deposit(double cash)
{
	balance += cash;
}
void  BankAccount::withdraw(double cash)
{
	if (balance < cash)
		cout << "잔액 이상 출금할 수 없습니다"<<endl;
	else
		balance -= cash;
	cout << "------------------------" << endl;
}
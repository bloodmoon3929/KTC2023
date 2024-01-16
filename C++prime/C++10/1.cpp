#include<iostream>
#include "1a.h"
using namespace std;
int main()
{
	BankAccount toss("김상우", "01039090490", 10000.0);
	toss.show();
	toss.withdraw(15000);
	toss.withdraw(5000);
	toss.show();
	toss.deposit(10000);
	toss.show();
	return 0;
}
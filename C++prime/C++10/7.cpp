#include<iostream>
#include "7a.h"
using namespace std;
int main()
{
	Plorg A;
	A.show();
	Plorg B("Sherlock", 40);
	B.show();
	B.change(20);
	B.show();
	return 0;
}
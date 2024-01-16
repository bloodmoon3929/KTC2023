#include<iostream>
#include "6a.h"
using namespace std;
int main()
{
	Move a;
	Move b(3, 5);
	a.showmove();
	b.showmove();
	a.reset(2,5);
	b=b.add(a);
	a.showmove();
	b.showmove();
	return 0;
}
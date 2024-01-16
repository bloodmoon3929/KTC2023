#include<iostream>
using namespace std;
void three(void);
void see(void);
int main(void)
{
	three();
	three();
	see();
	see();
	return 0;
}
void three(void)
{
	cout << "Three blind mice"<<endl;
}
void see(void)
{
	cout << "See how they run" << endl;
}
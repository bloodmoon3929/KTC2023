#include <iostream>
using namespace std;
void print_arr(char address[], int n = 0);
int main()
{
	char add[30] = "print";
	print_arr(add);
	print_arr(add, 0);
	print_arr(add, 1);
	print_arr(add);
	print_arr(add, 300);
	return 0;
}
void print_arr(char address[], int n)
{
	static int count = 0;
	count++;
	if (n == 0)
		cout << address;
	else
		for (int i = 0; i < count; i++)
			cout << address;
	cout << endl;
}
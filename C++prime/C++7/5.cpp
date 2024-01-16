#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
	int input;
	cout << "팩토리얼할 정수를 기입하시오(정수가 아닐수 종료)" << endl;
	while ((cin >> input).good())
		cout <<input<<"의 !의 값은 :"<< factorial(input)<<endl;

	return 0;
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

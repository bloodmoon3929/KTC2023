#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string total;
	int num = 0;
	cout << "출력할 행 수를 입력하시오: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		total.append(num-i, '.');
		total.append(i,'*');
		cout << total<<endl;
		total.clear();
	}
	return 0;
}
#include<iostream>
using namespace std;
int main(void)
{
	int low, high,sum=0;
	cout << "정수형 숫자를 기입하시오."<<endl;
	cin >> low;
	do 
	{
		cout << "이전 기입한 정수형 숫자보다 높은값을 숫자를 기입하시오." << endl;
		cin >> high;
	} while (low>high);
	for (int i = low; i <= high; i++)
		sum += i;
	cout << low << "부터 " << high << "까지의 합은" << sum<<"입니다.";
	return 0;
}
#include <iostream>
using namespace std;
long double odds(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	long double firstodds, secondodds;
	cout << "1회차: 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: ";
	if ((cin >> total >> choices) && choices <= total)
		firstodds = odds(total, choices);
	cout << "2회차: 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: ";
	if ((cin >> total >> choices) && choices <= total)
		secondodds = odds(total, choices);
	cout << "당신이 그랑프리를 탈 승률은 " << firstodds * secondodds << "번의 시도에 한 번입니다."<<endl;
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
long double odds(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
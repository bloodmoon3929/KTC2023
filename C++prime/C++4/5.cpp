#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string name;
	double mass;
	int cal;
};
int main(void)
{
	struct CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << "상호명 : " << snack.name << "\n중량 : " << snack.mass << "\n칼로리 : " << snack.cal;
	return 0;
}
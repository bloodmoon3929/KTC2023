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
	CandyBar* snack = new CandyBar[3];
	snack[0].name = "Mocha Munch";
	snack[0].mass = 2.3;
	snack[0].cal = 350;
	snack[1].name = "롯데제과";
	snack[1].mass = 4.3;
	snack[1].cal = 600;
	snack[2].name = "농심";
	snack[2].mass = 1.2;
	snack[2].cal = 30;
	for (int i = 0; i < 3; i++)
	{
		cout << "상호명 : " << snack[i].name
			<< "\n중량 : " << snack[i].mass
			<< "\n칼로리 : " << snack[i].cal << endl;
	}
	delete [] snack;
	return 0;
}
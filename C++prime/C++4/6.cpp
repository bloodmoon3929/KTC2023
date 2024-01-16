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
	struct CandyBar snack[3] = 
	{ { "Mocha Munch",2.3,350 },
	{"롯데제과",4.3,600},
	{"농심",1.2,30} };
	for (int i = 0; i < 3; i++)
	{
		cout << "상호명 : " << snack[i].name 
			<< "\n중량 : " << snack[i].mass 
			<< "\n칼로리 : " << snack[i].cal<<endl;
	}
	return 0;
}
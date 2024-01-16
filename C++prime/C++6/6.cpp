#include <iostream>
#include<string>
using namespace std;
struct donator
{
	string name;
	double money;
};
int main()
{
	int num=0;
	cout << "기부금을 내실 분이 몇 명인지 입력하십시오: ";
	(cin >> num).get();
	donator* giver = new donator[num];
	for (int i = 0; i < num; i++)
	{
		cout << i+1<<"번째 기부자의 이름을 기입해주십시오 : ";
		getline(cin,giver[i].name);
		cout << "기부금을 기입해주십시오 : ";
		(cin >> giver[i].money).get();
	}
	bool is_give =true;
	cout << "\n-----------\n";
	cout << "고액 기부자\n";
	for (int i = 0; i < num; i++)
	{
		if (giver[i].money >= 10000)
		{
			cout << giver[i].name << "님께서" << giver[i].money <<"달러를 기부해셨습니다."<< endl;
			is_give = false;
		}
	}
	if (is_give)
		cout << "기부자가 없습니다.\n";
	cout << "\n-----------\n";
	is_give = true;
	cout << "소액 기부자\n";
	for (int i = 0; i < num; i++)
	{
		if (giver[i].money < 10000)
		{
			cout << giver[i].name << "님께서" << giver[i].money << "달러를 기부해셨습니다." << endl;
			is_give = false;
		}
	}
	if (is_give)
		cout << "기부자가 없습니다.\n";
	cout << "\n-----------\n";
	delete[] giver;
	return 0;
}
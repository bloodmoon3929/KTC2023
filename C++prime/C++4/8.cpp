#include<iostream>
#include<string>
using namespace std;
struct Pizza
{
	string name;
	int diameter;
	int weight;
};
int main(void)
{
	Pizza * tcl =new Pizza;
	cout << "피자 회사의 이름을 입력하시오 :"<<endl;
	getline(cin, tcl->name);
	cout << "피자의 지름(cm)을 입력하시오 :" << endl;
	cin >> (*tcl).diameter;
	cout << "피자의 중량(g)을 입력하시오 :" << endl;
	cin >> tcl->weight;
	cout << "피자 회사의 이름 : " << (*tcl).name
		<< "\n피자의 지름 : " << tcl->diameter<<"cm"
		<< "\n피자의 중량 : " << tcl->weight <<"g"<< endl;
	delete tcl;
	return 0;
}
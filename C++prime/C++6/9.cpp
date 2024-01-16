#include <iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
struct donator
{
	string name;
	double money;
};
int main()
{
	int count = 0,num;
	string open_txt;
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하시오: ";
	getline(cin, open_txt);
	inFile.open(open_txt);
	if (!inFile.is_open())
	{
		cout << "파일을 여는것에 실패하였습니다.";
		exit(EXIT_FAILURE);
	}
	(inFile>>num).get();
	donator* giver = new donator[num];
	for (int i = 0; i < num; i++)
	{
		getline(inFile,giver[i].name);
		(inFile>> giver[i].money).get();
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

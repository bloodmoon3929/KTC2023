#include <iostream>
#include "8a.h"
using namespace std;

void square(Item& it);

int main()
{
	List list(3);
	Item it;
	int index = 0;

	cout << "리스트에 항목을 입력하십시오.\n";
	while (1)
	{
		if (list.isfull())
		{
			cout << "리스트가 가득 찼습니다."<<endl;
			break;
		}
		else
		{
			cout << "list " << ++index << " : ";
			cin >> it;
			list.add(it);
		}
	}
	list.show();

	list.visit(square);
	cout << "제곱한 후의 리스트 : ."<<endl;
	list.show();
	return 0;
}
void square(Item& it)
{
	it = it * it;
}
#include<iostream>
#include<cctype>
#include "5a.h"
using namespace std;

int main()
{
	Stack st;
	char ch;
	customer po;
	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P," << endl;
	cout << "종료하려면 Q를 입력하시오." << endl;
	while (cin>>ch&&toupper(ch)!='Q')
	{
		while (cin.get()!='\n')
			continue;
		if (!isgraph(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a':
				cout << "주문자의 이름을 입력해주세요. : ";
				cin.getline(po.fullname,sizeof(po.fullname));
				cout << "금액을 입력해주세요. : ";
				while (!(cin >> po.payment))
				{
					cout << "숫자가 아닙니다. 재 입력해주십시오.";
					while (cin.get() != '\n')
						continue;
				}
				if (st.isfull())
					cout << "스택이 가득 차 있습니다." << endl;
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if (st.isempty())
					cout << "스택이 비어 있습니다." << endl;
				else
					st.pop(po);
				break;
		}
		cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P," << endl;
		cout << "종료하려면 Q를 입력하시오." << endl;
	}
	cout << "프로그램을 종료합니다."<<endl;
	return 0;
}
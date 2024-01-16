#include<iostream>
using namespace std;
int main(void)
{
	char ch;
	cout << "다음 선택사항 중에서 하나를 선택하십시오. (끝내려면 q)"<<endl;
	cout << "c) camera			p) pianist"<<endl;
	cout << "t) tree				g) game"<<endl;
	cin >> ch;
	while(ch != 'q')
	{
		switch (ch)
		{
		case 'c':
			cout << "군부대에서는 보안상의 이유로 카메라 사용이 금지되었습니다." << endl;
			ch = 'q';
			break;
		case 'p':
			cout << "베토벤은 청각장애인이였으나, 뛰어난 피아니스트였습니다." << endl;
			ch = 'q';
			break;
		case 't':
			cout << "단풍나무는 잎이 별처럼 생겼습니다."<<endl;
			ch = 'q';
			break;
		case 'g':
			cout << "과도한 게임은 정신건강에 해롭습니다." << endl;
			ch = 'q';
			break;
		default:
			cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : ";
			cin >> ch;
			break;
		}
	}
	return 0;
}
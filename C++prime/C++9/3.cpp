#include<iostream>
#include<cstring>
using namespace std;
struct chaff
{
	char dross[20];
	int slag;
};
int main()
{
	chaff* pst;
	char* buffer = new char[500];
	pst = new (buffer) chaff[2];
	strcpy_s(pst[0].dross,"부스러기");
	pst[0].slag = 321;
	strcpy_s(pst[1].dross, "찌꺼기");
	pst[1].slag = 123;
	for (int i = 0; i < 2; i++)
	{
		cout << "dross :" << pst[i].dross << endl;
		cout << "slag :" << pst[i].slag << endl;
	}
	delete [] buffer;
	return 0;
}
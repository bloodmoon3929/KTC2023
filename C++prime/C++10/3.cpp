#include<iostream>
#include "3a.h"
using namespace std;

int main()
{
	int i = 0;
	Golf arr[5];
	while ( arr[i++].setgolf() && i < 5)
		continue;
	for (int j = 0; j < i - 1; j++)
		arr[j].showgolf();
	cout << "---------------" << endl;
	Golf person("apple", 5);
	person.showgolf();
	person.sethandicap(1);
	person.showgolf();
	return 0;
}
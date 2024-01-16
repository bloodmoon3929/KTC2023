#include<iostream>
#include "1a.h"
using namespace std;

int main()
{
	int i = 0;
	golf arr[5];
	while (setgolf(arr[i++]) && i < 5)
		continue;
	for (int j = 0; j < i-1; j++)
		showgolf(arr[j]);
	cout << "---------------" << endl;
	setgolf(arr[0],"apple",5);
	showgolf(arr[0]);
	handicap(arr[0], 1);
	showgolf(arr[0]);
	return 0;
}
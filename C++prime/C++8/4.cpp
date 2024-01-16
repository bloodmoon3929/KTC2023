#include <iostream>
using namespace std;
#include<cstring>
struct stringy
{
	char* str;
	int ct;
};
void set(stringy& paste, char* copy);
void show(stringy& print, int repeat=1);
void show(const char print[], int repeat = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing,3);
	show("Done!");
	return 0;
}
void set(stringy &paste, char *copy)
{
	char* temp = new char[strlen(copy)+1];
	temp = copy;
	paste.str = temp;
	paste.ct = strlen(paste.str);
}
void show(stringy& print, int repeat)
{
	for (int i = 0; i < repeat; i++)
		cout << print.str << endl;
}
void show(const char print[], int repeat)
{
	for (int i = 0; i < repeat; i++)
		cout << print << endl;
}
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string& ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};
Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}
void Person::Show() const
{
	cout << fname << " " << lname << endl;
}
void Person::FormalShow() const
{
	cout << lname << ", " << fname << endl;
}
int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.FormalShow();
	cout << endl;

	two.Show();
	two.FormalShow();
	cout << endl;

	three.Show();
	three.FormalShow();
	cout << endl;
	return 0;
}
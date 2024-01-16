#ifndef PLORGH
#define PLORGH
class Plorg
{
private:
	char ci_name[20];
	int ci;
public:
	Plorg(const char * name = "Plorga",int n=50);
	void change(int n);
	void show()const;
};
#endif
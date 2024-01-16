#ifndef GOLF
#define GOLF
class Golf
{
private:
	static const int LEN = 40;
	char fullname[LEN];
	int handicap;
public:
	Golf() { fullname[0] = '\0'; handicap = 0; };
	Golf(const char* name, int hc);
	int setgolf();
	void sethandicap(int hc);
	void showgolf()const;
};
#endif
#include<iostream>
using namespace std;
int main(void)
{
	long time;
	cout << "초 수를 입력하시오: ";
	cin >>  time;
	cout <<time<<"초 = "<<time/86400<< "일, "<<(time%86400)/3600<<"시간, "<<(time%3600)/60<<"분, "<< (time)%60<<"초";
	return 0;
}
#include<iostream>
using namespace std;
int main(void)
{
	int degree, min, sec;
	cout << "위도를 도, 분, 초 단위로 입력하시오:"<<endl;
	cout << "먼저, 도각을 입력하시오: ";
	cin >>  degree;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> min;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> sec;
	double latitude = (double)degree+((double)min+((double)sec/60))/60;
	cout <<degree<<"도, "<<min<< "분, "<<sec<<"초 = "<<latitude<<"도";
	return 0;
}
#include<iostream>
using namespace std;
template <typename T>
T SumArray(T arr[],int n);
template <typename T>
T SumArray(T * arr[], int n);
struct debts
{
	char name[50];
	double amount;
};
int main()
{
	int things[6] = {13,31,103,301,310,130}; 
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0}
	};
	double* pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Mr. E의 재산 합계=" << SumArray(things, 6) << endl;
	cout << "Mr. E의 채무 합계=" << SumArray(pd, 3)<< endl;
	return 0;
}
template <typename T>
T SumArray(T arr[], int n)
{
	T total=0;
	for (int i = 0; i < n; i++)
		total+=arr[i];
	return total;
}
template <typename T>
T SumArray(T* arr[], int n)
{
	T total = 0;
	for (int i = 0; i < n; i++)
		total+= *arr[i];
	return total;
}
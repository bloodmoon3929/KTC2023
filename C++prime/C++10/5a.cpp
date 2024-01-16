#include<iostream>
#include "5a.h"
using namespace std;
Stack::Stack()
{
	top = 0;
	total = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}
bool Stack::push(const Item& player)
{
	if (top < MAX)
	{
		user[top++] = player;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item& player)
{
	if (top > 0)
	{
		player=user[--top];
		total+=player.payment;
		cout << "총 수입 : "<<total<<endl;
		return true;
	}
	else
		return false;
}
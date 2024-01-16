#ifndef STACK_H_
#define STACK_H_
struct customer
{
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack
{
private:
	enum {MAX=10};
	Item user[MAX];
	int top;
	double total;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& player);
	bool pop(Item& player);
};
#endif
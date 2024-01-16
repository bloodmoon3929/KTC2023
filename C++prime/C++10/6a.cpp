#include <iostream>
using namespace std;
#include "6a.h"
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	cout << "(x, y) = (" << x << ", " << y << ")" << endl;
}
Move Move::add(const Move& m) const
{
	return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
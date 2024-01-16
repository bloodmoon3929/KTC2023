#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height, width, length, volume;
};
void triple(box* paper);
void print_struct(box print);
int main()
{
	box paper = {"군산택배",3,4,5,0};
	print_struct(paper);
	triple(&paper);
	print_struct(paper);
	return 0;
}
void triple(box* paper)
{
	paper->volume = paper->height * paper->length * paper->width;
}
void print_struct(box print)
{
	cout << "제조사 : " << print.maker<<endl;
	cout << "높이 : " << print.height << endl;
	cout << "너비 : " << print.width << endl;
	cout << "폭 : " << print.length << endl;
	cout << "부피 : " << print.volume << endl;
}
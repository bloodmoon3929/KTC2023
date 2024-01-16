#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	for (int x = 1; x <= 10; x++)
	{
		int one = 0, two = 0, three = 0, four = 0, five = 0;
		int six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
		printf("seed값이 %d일 경우\n",x);
		srand(x);
		for (int i = 0; i < 1000; i++)
		{
			switch (rand() % 10 + 1)
			{
			case 1:one++; break;
			case 2:two++; break;
			case 3:three++; break;
			case 4:four++; break;
			case 5:five++; break;
			case 6:six++; break;
			case 7:seven++; break;
			case 8:eight++; break;
			case 9:nine++; break;
			case 10:ten++; break;
			}
		}
		printf("1-%d, 2-%d, 3-%d, 4-%d, 5-%d, ", one, two, three, four, five);
		printf("6-%d, 7-%d, 8-%d, 9-%d, 10-%d\n", six, seven, eight, nine, ten);
	}
	
	return 0;
}
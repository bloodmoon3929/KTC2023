#include<stdio.h>
int main(int argc, char* argv[])
{
	int len = argc-1;
	for (int i = len; i > 0; i--)
	{
		printf("%s ", argv[i]);
	}
	return 0;
}
#include<stdio.h>

void face(void)
{
	printf("smile!");
	return;
}

int main()
{
	for (int i = 0; i < 3; i++) face();
	printf("\n");
	for (int i = 0; i < 2; i++) face();
	printf("\n");
	face();
	return 0;
}
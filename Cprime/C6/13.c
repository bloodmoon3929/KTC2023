#include<stdio.h>

int main(void)
{
	int a[8],squ=1,i;
	for (i = 0; i < 8; i++)
	{
		squ *= 2;
		a[i] = squ;
	}
	i = 0;
	do
	{
		printf("%d ",a[i]);
		i++;
	} while (i<8);
	return 0;
}
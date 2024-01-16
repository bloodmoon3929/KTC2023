#include<stdio.h>

int main(void)
{
	int count=97;
	char alp[26];

	for (int i = 0; i < 26; i++)
	{
		alp[i] = count;
		printf("%c, ", alp[i]);
		count++;
	}
	return 0;
}
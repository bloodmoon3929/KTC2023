#include<stdio.h>

void two(void)
{
	printf("two\n");
	return;
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}
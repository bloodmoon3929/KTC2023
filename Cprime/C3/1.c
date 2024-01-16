#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
	int a = INT_MAX + 1;
	float b = FLT_MAX * 100;
	float c = -FLT_MAX * 100;

	printf("int의 오버플로 : %d\n", a);
	printf("float의 오버플로 : %f\n", b);
	printf("float의 언더플로 : %f\n", c);

	return 0;
}
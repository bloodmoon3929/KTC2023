#include<stdio.h>
int rotate_l(int binary, int num);
void print_binary(int num, int len);
int main(void)
{
	unsigned int binary = 0b01001101;
	unsigned int temp = binary;
	int count = 0;
	printf("2진수 01001101을 왼쪽으로 3번 회전시킨 값 \n");
	int new_binary=rotate_l(binary,3);
	print_binary(new_binary, 8);
	return 0;
}
int rotate_l(int bin, int num)
{
	num = num % 8;
	unsigned int temp = bin >> (8 - num);
	bin = (bin << num) | temp;
	return bin;
}
void print_binary(int num, int len)
{
	for (int i = len - 1; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		printf("%d", bit);
	}
	printf("\n");
}
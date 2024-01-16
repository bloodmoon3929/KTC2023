#include<stdio.h>
int return_bit(int binary, int num);
int main(void)
{
	int input_binary = 0b01001101;
	printf("2진수 01001101의\n");
	for (int i = 1; i <= 8; i++)
	{
		int result = return_bit(input_binary, i);
		printf("%d번째 %d\n", i, result);
	}
	return 0;
}
int return_bit(int binary, int num)
{
	int mask = 1 << (num - 1);
	int bit_value = (binary & mask) >> (num - 1);
	return bit_value;
}
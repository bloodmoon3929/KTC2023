#include<stdio.h>
int on_bit(int binary);
int main(void)
{
	int input_binary = 0b01001101;
	printf("2진수 01001101중 on 상태의 갯수는 ");
	printf("%d개 입니다.",on_bit(input_binary));
	return 0;
}
int on_bit(int binary)
{
	int sum = 0;
	for (int i = 1; i <= 8; i++)
	{
		int mask = 1 << (i - 1);
		int bit_value = (binary & mask) >> (i - 1);
		if (bit_value == 1)
			sum++;
	}
	return sum;
}
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int binary_to_int(char* pb);
int main(void)
{
	int result;
	char* binary = "01001001";
	char input_binary[31];
	printf("2진수 01001001의 10진수는 : ");
	result = binary_to_int(binary);
	printf("%d\n", result);
	while (1)
	{
		bool is_binary = true;
		printf("원하는 2진수값을 입력하시오(0과 1만 입력) : ");
		scanf_s("%30s", input_binary, sizeof(input_binary));
		while (getchar() != '\n')
			continue;
		for (int i=0; i < strlen(input_binary); i++)
			if (input_binary[i] != '0'&&input_binary[i] != '1')
				is_binary = false;
		if (!is_binary)
			printf("이건 2진수가 아닙니다. 다시 입력해주세요\n");
		else
			break;
	}
	
	printf("2진수 %s의 10진수는 : ",input_binary);
	result = binary_to_int(input_binary);
	printf("%d\n", result);
	return 0;
}
int binary_to_int(char* pb)
{
	int sum = 0;
	int len = strlen(pb);
	for (int i = 0; i < len; i++)
		if (pb[i] == '1')
			sum += (int)pow(2, len - (i + 1));
	return sum;
}
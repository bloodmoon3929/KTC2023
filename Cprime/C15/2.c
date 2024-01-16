#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_binary(int num, int len);
int main(int argc,char *argv[]) 
{
    if (argc != 3)
    {
        fprintf(stderr, "명령행 전달인자가 제대로 적혀 있는지 확인하시오");
        exit(EXIT_FAILURE);
    }
    int result;
    char *first_binary = argv[1];
    char *second_binary = argv[2];
    int fir_length = strlen(first_binary);
    int sec_length = strlen(second_binary);
    int length = (fir_length > sec_length) ? fir_length : sec_length;
    int fir_binary = 0;
    for (int i = 0; i < fir_length; i++) 
        fir_binary = (fir_binary << 1) + (first_binary[i] - '0');
    int sec_binary = 0;
    for (int i = 0; i < sec_length; i++)
        sec_binary = (sec_binary << 1) + (second_binary[i] - '0');
    result = ~fir_binary;
    puts("첫 값의 역은 : ");
    print_binary(result, length);
    result = ~sec_binary;
    puts("둘째 값의 역은 : ");
    print_binary(result, length);
    result = fir_binary & sec_binary;
    puts("and 연산한 값은 : ");
    print_binary(result, length);
    result = fir_binary | sec_binary;
    puts("or 연산한 값은 : ");
    print_binary(result, length);
    result = fir_binary ^ sec_binary;
    puts("EOR 연산한 값은 : ");
    print_binary(result, length);
    return 0;
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
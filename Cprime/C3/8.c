#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int cup;
	printf("cup단위로 부피를 기입하시오 : ");
	scanf("%d", &cup);
	float pint = (float)cup / 2, ounce = cup * 8, table = ounce * 2, tea = table * 3;
	printf("%dcup당 pint는 : %.1f\n", cup, pint);
	printf("%dcup당 ounce는 : %.f\n", cup, ounce);
	printf("%dcup당 tablespoon는 : %.f\n", cup, table);
	printf("%dcup당 teaspoon는 : %.f\n", cup, tea);
	return 0;
}
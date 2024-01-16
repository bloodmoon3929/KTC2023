#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct polar
{
	double degrees;
	double vector;
};
struct orthogonal
{
	double x;
	double y;
};
struct orthogonal polar_to_orth(struct polar* ppol);
int main(void)
{
	struct polar input;
	struct orthogonal result;
	puts("벡터의 각도를 기입하시오.");
	scanf_s("%lf", &input.degrees);
	while (getchar()!='\n')
		continue;
	puts("벡터의 크기를 기입하시오.");
	scanf_s("%lf", &input.vector);
	while (getchar() != '\n')
		continue;
	result = polar_to_orth(&input);
	printf("해당 벡터의 x, y값은 %g, %g입니다.",result.x,result.y);
	return 0;
}
struct orthogonal polar_to_orth(struct polar* ppol)
{
	double degrees = (M_PI/ 180)*ppol->degrees;
	struct orthogonal temp;
	temp.x = ppol->vector * cos(degrees);
	temp.y = ppol->vector * sin(degrees);
	return temp;
}
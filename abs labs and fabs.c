#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b = -12;
	long result;
	long c = -1234567890L;
	double d;
	double e = -123.1;
	a = abs(b);
	result = labs(c);
	d = fabs(e);

	printf("the original number is:%d,the absolute is:%d\n", b, a);
	printf("the original number is:%ld,the absolute is:%ld\n", c, result);
	printf("the original number is:%lf,the absolute is:%lf\n", e, d);
	return 0;
}
#include <stdio.h>
void test()
{
	int i = 0;
	i++;
	printf("i=%d\n", i);
}
int main()
{
	int a = 0;
	for(a = 0; a < 10; a++)
	{
		test();
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
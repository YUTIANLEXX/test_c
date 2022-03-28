#include <stdio.h>
int print(char* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(p + i);
		printf("%d ", *(p + i));
	}
}
int main()
{
	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}
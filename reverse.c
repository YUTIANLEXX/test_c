#include <stdio.h>
int main()
{
	int i = 0;
	char str[7] = { "mrsoft" };
	char ret[7] = { 0 };
	int size = 0;
	size = sizeof(str);
	for (i = 0; i < 6; i++)
	{
		ret[size - i - 2] = str[i];

	}
	printf("Êä³öÔ´×Ö·û´®£º%s\n", str);
	printf("Êä³öÄ¿±ê×Ö·û´®£º%s\n", ret);
	return 0;
}
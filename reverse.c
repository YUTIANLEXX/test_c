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
	printf("���Դ�ַ�����%s\n", str);
	printf("���Ŀ���ַ�����%s\n", ret);
	return 0;
}
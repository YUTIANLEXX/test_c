#include <stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}
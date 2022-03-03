#include<stdio.h>
int main(void)
{
	int a;
	printf("输入一个整数：");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("偶数\n");
	else
		printf("奇数\n");
	return 0;
}
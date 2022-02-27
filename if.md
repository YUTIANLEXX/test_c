#define <stdio.h>
int main()
{
	int input = 0;
	printf("学习代码\n");
	printf("你要每天练习吗?(1/0)>:");
	scanf("%d", &input);

	if (input==1)
		printf("拿到好offer\n");
	else
		printf("卖红薯\n");
		return 0;
}
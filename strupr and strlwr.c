#include <stdio.h>
#include <string.h>
int main()
{
	char text[20] = { 0 };
	char change[20] = { 0 };
	int num = 0;
	int i = 0;
	while (1)
	{
		printf("输入转换大小写方式（1.表示大写，2.表示小写，0.表示退出）：\n");
		scanf("%d", &num);
		if (1 == num)
		{
			printf("输入一个字符串：\n");
			scanf("%s", text);
			strcpy(change, text);
			strupr(change);
			printf("转换成大写字母的字符串为：%s\n", change);
		}
		else if (2 == num)
		{
			printf("输入一个字符串：\n");
			scanf("%s", text);
			strcpy(change, text);
			strlwr(change);
			printf("转换成小写字母的字符串为：%s\n", change);
		}
		else if (0 == num)
		{
			break;
		}
	}
	return 0;
}
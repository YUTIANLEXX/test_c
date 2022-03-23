#include <stdio.h>
#include <string.h>
int main()
{
	char str1[30] = { 0 };
	char str2[30] = { 0 };
	printf("输入目的字符串：\n");
	gets(str1);
	printf("输入源字符串：\n");
	gets(str2);

	printf("输出目的字符串：\n");
	puts(str1);
	printf("输出源字符串：\n");
	puts(str2);

	strcpy(str1, str2);
	printf("调用strcpy函数进行字符串复制：\n");
	printf("复制字符串之后的目的字符串：\n");
	puts(str1);
	return 0;
}
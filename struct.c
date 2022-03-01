#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C语言程序设计", 55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);
	strcpy(b1.name, "C++");
	printf("修改后的书名:%s\n", b1.name);
	return 0;
}

#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C���Գ������", 55 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	strcpy(b1.name, "C++");
	printf("�޸ĺ������:%s\n", b1.name);
	return 0;
}

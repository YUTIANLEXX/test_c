#include <stdio.h>
#include <string.h>
int main()
{
	char str1[30] = { 0 };
	char str2[30] = { 0 };
	printf("����Ŀ���ַ�����\n");
	gets(str1);
	printf("����Դ�ַ�����\n");
	gets(str2);

	printf("���Ŀ���ַ�����\n");
	puts(str1);
	printf("���Դ�ַ�����\n");
	puts(str2);

	strcpy(str1, str2);
	printf("����strcpy���������ַ������ƣ�\n");
	printf("�����ַ���֮���Ŀ���ַ�����\n");
	puts(str1);
	return 0;
}
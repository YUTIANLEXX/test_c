#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)    //ѭ�����αȽ��ַ��Ƿ����
	{
		if (*str1 == '\0')     //��ȣ�����0
			return 0;
		*str1++;
		*str2++;
	}
	if (*str1 > *str2)       //���ڣ����ض���0
		return 1;
	else
		return -1;           //С�ڣ�����С��0
	//return (*str1 - *str2);
}
int main()
{
	char arr1[] = "abcbef";
	char arr2[] = "abcdef";
	int ret = my_strcmp(arr1, arr2);
	printf("ret=%d\n", ret);
	return 0;
}
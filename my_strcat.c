#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	//�ҵ�Ŀ���ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
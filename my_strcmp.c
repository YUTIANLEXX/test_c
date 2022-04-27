#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)    //循环依次比较字符是否相等
	{
		if (*str1 == '\0')     //相等，返回0
			return 0;
		*str1++;
		*str2++;
	}
	if (*str1 > *str2)       //大于，返回对于0
		return 1;
	else
		return -1;           //小于，返回小于0
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
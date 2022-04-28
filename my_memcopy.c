#include <stdio.h>
#include <assert.h>
struct s{
	char name[20];
	int age;
};
void* my_memcopy(void* dest, const void*src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 0 };
	my_memcopy(arr2, arr1, sizeof(arr1));
	return 0;
}
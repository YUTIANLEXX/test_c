#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//��->ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 20);
	return 0;
}
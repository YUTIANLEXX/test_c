#include <stdio.h>
int main()
{
	int i = 0;
	char str[7] = { "mrsoft" };
	char ret[7] = { 0 };
	int size = 0;
	size = sizeof(str);
	for (i = 0; i < 6; i++)
	{
		ret[size - i - 2] = str[i];

	}
	printf("Êä³öÔ´×Ö·û´®£º%s\n", str);
	printf("Êä³öÄ¿±ê×Ö·û´®£º%s\n", ret);
	return 0;
}

//Another way to do it
//#include <stdio.h>
//void reverse_string(char *arr)
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	reverse_string(arr)	;
//	printf("%s\n", arr);
//	return 0;
//}


//Another way to do it

//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char *arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcd";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
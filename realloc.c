#include <stdio.h>
#include <stdlib.h>


struct S
{
	int n;
	char arr[0];
};

int main()
{
	struct S *ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S *ptr = realloc(ps, 44);
	if (ptr == NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}

//typedef struct S
//{
//	int n;
//	int *arr;
//};
//
//int main()
//{
//	int i = 0;
//	struct S *p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr = (int *)malloc(10 * sizeof(int));
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
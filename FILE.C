#include <stdio.h>

int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	FILE *pfile;
//	pfile = fopen("myfile.txt", "w");
//	if (pfile != NULL)
//	{
//		fputs("fopen example", pfile);
//		fclose(pfile);
//	}
//	return 0;
//}
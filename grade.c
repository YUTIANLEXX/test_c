#include <stdio.h>
int main()
{
	char Grade;
	printf("please enter your grade\n");
	scanf("%c", &Grade);
	printf("Grade is about:");
	switch (Grade)
	{
	case 'A':
		printf("90-100\n");
		break;
	case 'B':
		printf("80-89\n");
		break;
	case 'C':
		printf("70-79\n");
		break;
	case 'D':
		printf("60-69\n");
		break;
	case 'F':
		printf("<60\n");
		break;
	default:
		printf("you enter the char is wrong\n");
		break;
	}

	return 0;
}
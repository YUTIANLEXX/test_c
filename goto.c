#include <stdio.h>
int main()
{
	int Step;
	int Select;
	for (Step = 1; Step < 10; Step++)
	{
		printf("The Step is:%d\n", Step);
		do
		{
			printf("enter a number to select\n");
			printf("(0 is quit,99 for the next step)\n");
			scanf("%d", &Select);
			if (Select == 0)
			{
				goto exit;
			}
		} while (Select != 99);
	}
exit:
	printf("Exit the program!");
	return 0;
}
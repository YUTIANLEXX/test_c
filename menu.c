#include <stdio.h>
int main()
{
	int Select = 1;
	while (Select != 0)
	{
		//œ‘ æ≤Àµ•ƒ⁄»›
		printf("--------Menu--------\n");
		printf("------Sell---------1\n");
		printf("------Buy----------2\n");
		printf("------ShowProduct--3\n");
		printf("------Out----------0\n");
		scanf("%d", &Select);
		switch (Select)
		{
		case 1:
			printf("you are buying something into store\n");
			break;
		case 2:
			printf("you are selling to consumer\n");
			break;
		case 3:
			printf("checking the store\n");
			break;
		case 0:
			printf("the program is out\n");
			break;
		default:
			printf("you put a wrong selection\n");
			break;
		}
	}
	return 0;
}
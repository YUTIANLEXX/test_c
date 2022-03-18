#include <stdio.h>
int main()
{
	int Discount;
	int Space;
	int Switch;
	float Price, Weight, AllPrice;
	printf("enter the price,weight and space\n");
	scanf("%f %f %d", &Price, &Weight, &Space);
	if (Space > 3000)
	{
		Switch = 12;
	}
	else
	{
		Switch = Space / 250;                        //计算折扣的检验情况
	}
	switch (Switch)
	{
	case 0:
		Discount = 0;
		break;
	case 1:
		Discount = 2;
		break;
	case 2:
	case 3:
		Discount = 5;
		break;
	case 5:
	case 6:
	case 7:
		Discount = 8;
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		Discount = 10;
		break;
	case 12:
		Discount = 15;
		break;
	default:
		break;
	}
	AllPrice = Price*Weight*Space*(1 - Discount / 100.0); //计算总价格
	printf("AllPrice is:%.4f\n", AllPrice);               //输出结果
	return 0;
}
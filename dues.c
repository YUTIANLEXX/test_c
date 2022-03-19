#include <stdio.h>
int main()
{
	//定义变量表示欠款数
	float  Dues;
	//定义变量表示总欠款数
	float Amount;
	//定义表示是否按时归还
	int Ontime;
	//用来接收用户输入字符
	char ch = 0;

	printf("Enter dues amount:\n");
	scanf("%f", &Dues);
	printf("On Time?(y/n)\n");
	getchar();
	Ontime = (ch == "y") ? 1 : 0;
	Amount = Ontime ? Dues : (Dues*1.1);
	printf("the Amount is:%.2f\n", Amount);
	return 0;
}
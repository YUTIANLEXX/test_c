#include <stdio.h>
int main()
{
	//���������ʾǷ����
	float  Dues;
	//���������ʾ��Ƿ����
	float Amount;
	//�����ʾ�Ƿ�ʱ�黹
	int Ontime;
	//���������û������ַ�
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
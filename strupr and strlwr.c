#include <stdio.h>
#include <string.h>
int main()
{
	char text[20] = { 0 };
	char change[20] = { 0 };
	int num = 0;
	int i = 0;
	while (1)
	{
		printf("����ת����Сд��ʽ��1.��ʾ��д��2.��ʾСд��0.��ʾ�˳�����\n");
		scanf("%d", &num);
		if (1 == num)
		{
			printf("����һ���ַ�����\n");
			scanf("%s", text);
			strcpy(change, text);
			strupr(change);
			printf("ת���ɴ�д��ĸ���ַ���Ϊ��%s\n", change);
		}
		else if (2 == num)
		{
			printf("����һ���ַ�����\n");
			scanf("%s", text);
			strcpy(change, text);
			strlwr(change);
			printf("ת����Сд��ĸ���ַ���Ϊ��%s\n", change);
		}
		else if (0 == num)
		{
			break;
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int i = 0;
	for (i = 300; i <= 800; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d\t", i);
		}*/
	//}//��300-800֮�䣬�ܱ�3���������ܱ�5�����������ܸ���
	int a = 0;
	printf("������һ��ʮ������\n");
	scanf("%d", &a);
	printf("%o\n%x\n", a, a);//%o��ȡ8��������%x��ȡ16������
    return 0;
	system("pause");
}
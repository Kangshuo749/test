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
	//}//求300-800之间，能被3整除或者能被5整除的数的总个数
	int a = 0;
	printf("请输入一个十进制数\n");
	scanf("%d", &a);
	printf("%o\n%x\n", a, a);//%o是取8进制数，%x是取16进制数
    return 0;
	system("pause");
}
//ʹ��goto���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");//-s��ʾ�ػ���-t��ʾʲôʱ��ػ�
//again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ���\n�����룺>");
//	scanf("%s", input);
//	if (strcmp(input, "������")==0)
//	{
//		system("shutdown -a");
//	}
//	else {
//		goto again;//again��һ����ǩ���ͱ�ʾһ�������λ��
//	}
//	system("pause");
//	return 0;
//}
//ʹ��ѭ�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ���\n�����룺>");
	scanf("%s", input);
	while (1) {
		if (strcmp(input, "������") == 0) {
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}
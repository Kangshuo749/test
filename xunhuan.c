//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	for (j = 1; j <= 10; j++) {
//		int factor = 1;
//		for (i = 1; i <=j; i++) {
//			factor = factor * i;
//		}
//		num = num + factor;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>//Sleep��Ҫ������ͷ�ļ�
//int main() {
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right) {
//		Sleep(1000);//˯��,�ó����һ��,��һ����ִ��,ʹ�ٶ�������,�۲�ĸ����
//		system("cls");//�����Ļ,Ӫ��һ���ƿ����ӵĸо�
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char psw[] = "";
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("����������\n");
		scanf("%s", &psw);
		if (strcmp(psw, "12345") == 0)//c������,����ʹ��==�Ƚ������ַ����������,()������������ж��Ƿ����
			break;
	}
	if (i == 3) {
		printf("exit\n");
	}
	else {
		printf("log in\n");
	}
	system("pause");
	return 0;
}
//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("��������������\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//дһ�������ӡ1 - 100֮������3�ı���������
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//���������������������������Լ��
//���磺
//���룺20 40
//�����20
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	int i = 0;
//	printf("������������\n");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		tmp = b;
//	else
//		tmp = a;
//	for (i = tmp; i > 1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			printf("%d", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//��ӡ1000�굽2000��֮�������
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	for (i = 1000; i <= 2000; i++) {
		if (i % 100 == 0) {
			if (i % 400 == 0)
				printf("%d ", i);
		}
		else {
			if (i % 4 == 0) {
				printf("%d ", i);
			}
		}
	}
	system("pause");
	return 0;
}
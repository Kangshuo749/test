//#include<stdio.h>
//#include<stdlib.h>
////get_max���������
//int get_max(int x, int y) {
//		return (x > y) ? x : y;
//}
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void swap2(int* x, int* y) {
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	swap2(&num1,&num2);
//	printf("%d %d", num1, num2);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void print(int num) {
//	if (num > 9) {
//		print(num / 10);
//	}
//		printf("%d ",num% 10);
//}
//int main() {
//	int num = 0;
//	printf("������һ���޷�������\n");
//	scanf("%d", &num);
//	print(num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int  Strlen(const char* str) {
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str + 1);//+1��ζ�ŵõ�һ���µ�ָ�룬����µ�ָ��ָ����һ��Ԫ��
//}
//int main() {
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//��n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int factorial(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main() {
//	int n = 0;
//	printf("�󼸵Ľ׳�\n");
//	scanf("%d", &n);
//	int num = factorial(n);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fib(int n) {
	if (n <= 2)
		return 1;
	else
		return  fib(n - 1) + fib(n - 2);
}
int main() {
	int n = 0;
	printf("��ڼ���쳲�������\n");
	scanf("%d", &n);
	int num = fib(n);
	printf("%d\n", num);
	system("pause");
	return 0;
}
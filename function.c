//#include<stdio.h>
//#include<stdlib.h>
////get_max函数的设计
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
//	printf("请输入一个无符号整数\n");
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
//		return 1 + Strlen(str + 1);//+1意味着得到一个新的指针，这个新的指针指向下一个元素
//}
//int main() {
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//求n的阶乘
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
//	printf("求几的阶乘\n");
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
	printf("求第几个斐波那契数\n");
	scanf("%d", &n);
	int num = fib(n);
	printf("%d\n", num);
	system("pause");
	return 0;
}
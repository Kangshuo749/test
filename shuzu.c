//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int Sn = 0;
//	printf("请输入a\n");
//	scanf("%d", &a);
//	int n = a;
//	for (int i = 1; i <= 5; i++) {
//		Sn = Sn + a;
//		a= a * 10 + n;
//	}
//	printf("a+aa+aaa+aaaa+aaaaa的结果是%d\n", Sn);
//	system("pause");
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<stdlib.h>
////计算m的n次方
//int func(int m, int n) {
//	if (n == 0)
//		return 1;
//	else
//		return m * func(m, n - 1);
//}
//int main() {
//	for (int i = 0; i <= 100000; i++) {
//		int n = 0;
//		int sum =0;
//		int tmp = i;
//		while (tmp) {
//			tmp =tmp / 10;
//			n++;//	求出位数
//		}
//		tmp = i;
//		while (tmp) {
//			int m = tmp % 10;
//			int res = func(m, n);
//			tmp = tmp / 10;
//			sum += res;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//打印菱形
#include<stdio.h>
#include<stdlib.h>
#define H 13//这里对H定义的数字必须为奇数，因为最长行只有一行，其他的关于其对称。
//如果用scanf输入行数的话，最好加一个输入行数是否为奇数（或者是否有效）的判断。
int main() {
	int line = 0;
	int times = 0;
	int blank = 0;
	int n = 0;
	//第一阶段：正三角
	n = (H + 1) / 2;//n为递增的行数，加一是因为递增行比递减行多一行，也是最长的那行。
	for (line = 1; line <= n; line++) {//递增行的
		for (blank = n - line; blank > 0; blank--)//空格递减
			printf(" ");
		for (times = 2 * line - 1; times > 0; times--)//次数
			printf("*");//星号递增
		printf("\n");
	}
	//第二阶段：反三角
	for (line = H - n; line > 0; line--) {//递减行
		for (blank = n - line; blank > 0; blank--) //反向递减
			printf(" ");
		for (times = 2 * line - 1; times > 0; times--)//次数
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
//斐波那契数非递归
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int a = 0;
//	printf("计算第几个斐波那契数\n");
//	scanf("%d", &a);
//	int x1 = 0;
//	int x2 = 1;
//	int x3 = 1;
//	int c = 0;
//	for (i = 3; i <= a; i++) {
//		c = x2 + x3;
//		x2 = x3;
//		x3 = c;
//	}if (a == 1 || a == 2) {
//		printf("%d\n", x2);
//	}
//	else {
//	printf("%d\n", c);
//}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int fibal(int n) {
//	if (n == 1 || n == 2)
//		return 1;
//	else return fibal(n - 1) + fibal(n - 2);
//}
//int main() {
//	int a = 0;
//	printf("求第几个斐波那契数\n");
//	scanf("%d", &a);
//	int num = fibal(a);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string( char* str) {
	//char* str = (char*)str;
	int len = strlen(str);
	int tem = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str+1)>1) 
		reverse_string(str + 1);
	*(str + len - 1) = tem;
}

int main() {
	char str[] = "abcdef";
	printf("before:%s\n", str);
	reverse_string(str);
	printf("after:%s\n", str);
	system("pause");
	return 0;
}
//使用goto语句
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");//-s表示关机，-t表示什么时候关机
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入：>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else {
//		goto again;//again是一个标签，就表示一个代码的位置
//	}
//	system("pause");
//	return 0;
//}
//使用循环语句
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入：>");
	scanf("%s", input);
	while (1) {
		if (strcmp(input, "我是猪") == 0) {
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}
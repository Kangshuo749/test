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
//#include<windows.h>//Sleep所要包含的头文件
//int main() {
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right) {
//		Sleep(1000);//睡觉,让程序等一等,过一会在执行,使速度慢下来,观察的更清楚
//		system("cls");//清空屏幕,营造一种掀开帘子的感觉
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
		printf("请输入密码\n");
		scanf("%s", &psw);
		if (strcmp(psw, "12345") == 0)//c语言中,不能使用==比较两个字符串内容相等,()里的内容用于判断是否相等
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
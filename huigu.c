//逆序非递归实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverseString(char arr[]) {
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right) {
//		char tmp = arr[left];//经典的交换三联，交换left和right位置的元素
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "abcdefg";
//	reverseString(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//逆序递归实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverseString(char arr[]) {
//	//先去交换左右两侧边缘的字符，然后递归处理中间的字符串
//	//为了知道右侧边缘的字符是啥，需要先知道字符串的长度
//	int len = strlen(arr);
//	if (len == 0||len==1) {
//		return;
//	}
//	//交换边缘的元素
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	//下面这个代码是一个临时性操作，目的是为了让中间的“bcdef”能够作为一个独立的字符串
//	arr[len - 1] = '\0';
//	//递归来处理中间部分的字符串
//	//为了得到中间部分的字符串，需要做两件事：
//	//arr+1，得到中间字符串的起始位置
//	//还需要把刚才的len-1   g的位置设为\0
//	//进行递归
//	reverseString(arr + 1);
//	//刚才是临时的把len-1的位置设为\0了
//	//当递归结束的时候，还需要把len-1的位置还原成合理的值
//	arr[len - 1] = tmp;
//}
//int main() {
//	char arr[] = "abcdefg";
//	reverseString(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//冒泡排序
#include<stdio.h>
#include<stdlib.h>
int main() {
	char arr[] = { 5,8,2,4,9,0,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int times = 1; times <= len; times++) {
		for (int i = 0; i < len-1; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
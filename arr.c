//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//    int arr[] = { 1,2,3,4,5 };
//    int* p = arr;
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", *(p + i));
//    }
//    system("pause");
//    return 0;
//}
//写一个函数，可以逆序一个字符串的内容。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char* arr) {
	char* left = arr;
	char* right = arr+strlen(arr) - 1;
	while (left < right) {
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main() {
	char arr[] = "abcdefg";
	swap(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
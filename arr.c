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
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
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
//дһ����������������һ���ַ��������ݡ�
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
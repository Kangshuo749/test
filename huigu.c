//����ǵݹ�ʵ��
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverseString(char arr[]) {
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right) {
//		char tmp = arr[left];//����Ľ�������������left��rightλ�õ�Ԫ��
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
//����ݹ�ʵ��
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverseString(char arr[]) {
//	//��ȥ�������������Ե���ַ���Ȼ��ݹ鴦���м���ַ���
//	//Ϊ��֪���Ҳ��Ե���ַ���ɶ����Ҫ��֪���ַ����ĳ���
//	int len = strlen(arr);
//	if (len == 0||len==1) {
//		return;
//	}
//	//������Ե��Ԫ��
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	//�������������һ����ʱ�Բ�����Ŀ����Ϊ�����м�ġ�bcdef���ܹ���Ϊһ���������ַ���
//	arr[len - 1] = '\0';
//	//�ݹ��������м䲿�ֵ��ַ���
//	//Ϊ�˵õ��м䲿�ֵ��ַ�������Ҫ�������£�
//	//arr+1���õ��м��ַ�������ʼλ��
//	//����Ҫ�Ѹղŵ�len-1   g��λ����Ϊ\0
//	//���еݹ�
//	reverseString(arr + 1);
//	//�ղ�����ʱ�İ�len-1��λ����Ϊ\0��
//	//���ݹ������ʱ�򣬻���Ҫ��len-1��λ�û�ԭ�ɺ����ֵ
//	arr[len - 1] = tmp;
//}
//int main() {
//	char arr[] = "abcdefg";
//	reverseString(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//ð������
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
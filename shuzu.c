//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int Sn = 0;
//	printf("������a\n");
//	scanf("%d", &a);
//	int n = a;
//	for (int i = 1; i <= 5; i++) {
//		Sn = Sn + a;
//		a= a * 10 + n;
//	}
//	printf("a+aa+aaa+aaaa+aaaaa�Ľ����%d\n", Sn);
//	system("pause");
//	return 0;
//}
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//#include<stdlib.h>
////����m��n�η�
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
//			n++;//	���λ��
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
//��ӡ����
#include<stdio.h>
#include<stdlib.h>
#define H 13//�����H��������ֱ���Ϊ��������Ϊ���ֻ��һ�У������Ĺ�����Գơ�
//�����scanf���������Ļ�����ü�һ�����������Ƿ�Ϊ�����������Ƿ���Ч�����жϡ�
int main() {
	int line = 0;
	int times = 0;
	int blank = 0;
	int n = 0;
	//��һ�׶Σ�������
	n = (H + 1) / 2;//nΪ��������������һ����Ϊ�����бȵݼ��ж�һ�У�Ҳ��������С�
	for (line = 1; line <= n; line++) {//�����е�
		for (blank = n - line; blank > 0; blank--)//�ո�ݼ�
			printf(" ");
		for (times = 2 * line - 1; times > 0; times--)//����
			printf("*");//�Ǻŵ���
		printf("\n");
	}
	//�ڶ��׶Σ�������
	for (line = H - n; line > 0; line--) {//�ݼ���
		for (blank = n - line; blank > 0; blank--) //����ݼ�
			printf(" ");
		for (times = 2 * line - 1; times > 0; times--)//����
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
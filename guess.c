//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(){
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int temp = 0;
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 6,7,8,9,10 };
//	for (; i < 5; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("����aΪ��");
//	for (; j < 5; j++) {
//		printf("%d ", a[j]);
//	}
//	printf("\n����bΪ��");
//	for (; k < 5; k++) {
//		printf("%d ", b[k]);
//	}
//	system("pause");
//	return 0;
//}
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define LENGTH 10
//void swap(int* x, int* y) {
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void init(int arr[LENGTH]) {
//	for (int i = 0; i < LENGTH; i++)
//		arr[i] = '0';
//}
//void print(int arr[LENGTH]){
//	for (int i = 0; i < LENGTH; i++) {
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[LENGTH]) {
//	for (int i = 0; i < LENGTH / 2; i++) {
//		swap(&arr[i], &arr[LENGTH-1-i]);
//	}
//}
//int main() {
//	int arr[LENGTH];
//	init(arr);
//	print(arr);
//	reverse(arr);
//	printf("\n");
//	for (int i = 0; i < LENGTH; i++) {
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//ð������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	int arr[] = { 8,4,2,7,5,6,1 };
//	int len = 0;
//	int temp = 0;
//	len = sizeof(arr) / sizeof(arr[0]);
//	for (j = 1; j < len; j++) {
//		for (i = 0; i < len-j; i++) {
//			if (arr[i] > arr[i + 1]) {
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//#define MAX_ROW 10
//#define MAX_COL 10
//#define MINECOUNT 10
//void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
//	memset(showMap, '*', MAX_ROW * MAX_COL);
//	memset(mineMap, '0', MAX_ROW * MAX_COL);
//	//��ȡ����
//	srand((unsigned int)time(0));
//	int mineCount = 0;
//	while (mineCount < MINECOUNT) {
//		int row = rand() % MAX_ROW;
//		int col = rand() % MAX_COL;
//		if (mineMap[row][col] == '1')
//			continue;
//		mineMap[row][col] = '1';
//		mineCount++;
//	}
//}
//void print(char theMap[MAX_ROW][MAX_COL]) {
//	for (int row = 0; row < MAX_ROW; row++) {
//		for (int col = 0; col < MAX_COL; col++) {
//			printf("%c ", theMap[row][col]);
//		}
//		printf("\n");
//	}
//}
//void update(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL],int row,int col) {
//	int count = 0;
//	for (int r = row - 1; r <= row + 1; r++) {
//		for (int c = col - 1; c <= col + 1; c++) {
//			if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//				continue;
//			}
//			if (r ==row && c == col) {
//				continue;
//			}
//			if (mineMap[r][c] == '1') {
//				count++;
//			}
//		}
//	}
//	showMap[row][col] = '0' + count;
//}
//
//int main() {
//	char showMap[MAX_ROW][MAX_COL] = { 0 };
//	char mineMap[MAX_ROW][MAX_COL] = { 0 };
//	init(showMap, mineMap);
//	while (1) {
//		system("cls");
//		print(showMap);
//		//print(mineMap);
//		int row = 0;
//		int col = 0;
//		int openedCount = 0;
//		printf("����������\n");
//		scanf("%d %d", &row, &col);
//		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//			printf("����������Ч�����������룡\n");
//			continue;
//		}
//		if (showMap[row][col] != '*') {
//			printf("��λ���ѱ����������������룡\n");
//			continue;
//		}
//		if (mineMap[row][col] == '1') {
//			printf("�������ˣ���Ϸ������\n");
//			break;
//		}
//		update(showMap, mineMap, row, col);
//		openedCount++;
//		if (openedCount == MAX_ROW * MAX_COL - MINECOUNT) {
//			printf("��ϲ����ʤ��\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int bin_diff_bit(int m, int n) {
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int m = 0;
//	int n = 0;
//	printf("��������������\n");
//	scanf("%d %d", &m, &n);
//	printf("��%d��λ��ͬ\n",bin_diff_bit(m,n));
//	system("pause");
//	return 0;
//}
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int m = 0;
//	printf("������һ������\n");
//	scanf("%d", &m);
//	//��ӡ����λ
//	int i = 0;
//	for (i = 31; i > 0; i -= 2) {
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d", m >> i & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	printf("������һ������\n");
//	int m = 0;
//	int tmp = 0;
//	scanf("%d", &m);
//	int count = 0;
//	while (m) {
//			m = m & (m - 1);
//			count++;
//		}
//	printf("%d��1\n", count);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a = 0;
	int b = 0;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
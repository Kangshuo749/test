//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int func(int sum,int sale) {
//	int bottle = sum / sale;
//	int total = bottle;
//	int y = bottle;
//	while (y > 1) {
//		y = y / 2;
//		total +=y;
//	}
//	return total;
//}
//int main() {
//	int sum = 0;
//	int sale = 1;
//	printf("现有多少钱\n");
//	scanf("%d", &sum);
//	int total = func(sum, sale);
//	printf("%d\n", total);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//初始化棋盘
void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++){
			chess[row][col] = ' ';
		}
	}
}
//打印棋盘
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}
//玩家落子
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = 0;
		int col = 0;
		printf("请输入落子位置(row,col)\n");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= 3 || col < 0 || col >= 3) {
			printf("您的输入非法!请重新输入\n");
			continue;
		}
		 if (chessBoard[row][col] != ' ') {
			printf("该位置已经落子,请重新输入\n");
			continue;
		}
		    system("cls");//在下一个结果显示之前清屏
			chessBoard[row][col] = 'x';
			break;
	}
}
//电脑落子
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	srand((char)time(0));
	while (1) {
		system("cls");
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
//判断棋盘是否满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ')
				return 0;
		}
	}
	return 1;
}
char isGameover(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' ' && 
			chessBoard[row][1] == chessBoard[row][0] && chessBoard[row][2] == chessBoard[row][0])
			return chessBoard[row][0];
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' &&
			chessBoard[1][col] == chessBoard[0][col] && chessBoard[2][col] == chessBoard[0][col])
			return chessBoard[0][col];
	}
	
	if (chessBoard[0][0] != ' ' && chessBoard[1][1] == chessBoard[0][0] && chessBoard[2][2] == chessBoard[0][0])
		return chessBoard[0][0];
	if (chessBoard[0][2] != ' ' && chessBoard[1][1] == chessBoard[0][2] && chessBoard[2][0] == chessBoard[0][2])
		return chessBoard[0][2];
	if (isFull(chessBoard))
		return 'q';
	else return ' ';
}
int main() {
	char winner = ' ';
	printf("欢迎来到三子棋游戏\n");
	char chessBoard[MAX_ROW][MAX_COL];
	init(chessBoard);
	while (1) {
		print(chessBoard);
		playerMove(chessBoard);
		winner=isGameover(chessBoard);
		if (winner != ' ')
			break;
		computerMove(chessBoard);
		winner = isGameover(chessBoard);
		if (winner != ' ')
			break;
	}
	print(chessBoard);
	if (winner == 'x')
		printf("恭喜您获胜\n");
	else if (winner == 'o')
		printf("很遗憾,电脑获胜\n");
	else
		printf("此局为和局\n");
	system("pause");
	return 0;
}
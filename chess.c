#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//初始化棋盘
void init(char chess[MAX_ROW][MAX_COL]) {
	for (int ROW = 0; ROW< MAX_ROW;ROW++) {
		for (int COL = 0; COL < MAX_COL; COL++) {
			chess[ROW][COL] = ' ';
		}
	}
}
//打印棋盘
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int ROW = 0; ROW < MAX_ROW; ROW++) {
		printf("|");
		for (int COL = 0; COL < MAX_COL; COL++) {
			printf(" %c |", chess[ROW][COL]);
		}
		printf("\n+---+---+---+\n");
	}
}
//玩家落子
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		printf("请输入落子位置\n");
		int ROW = 0;
		int COL = 0;
		scanf("%d %d", &ROW, &COL);
		if (ROW < 0 || ROW >= MAX_ROW || COL < 0 || COL >= MAX_COL) {
			printf("您的输入有误！请重新输入\n");
			continue;
		}
		if (chessBoard[ROW][COL] != ' ') {
			printf("该位置已经被落子，请重新输入\n");
			continue;
		}
		system("cls");
		chessBoard[ROW][COL] = 'x';
		break;
	}
}
//电脑落子
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	srand((char)time(0));
while(1){
	int ROW = rand() % MAX_ROW;
	int COL = rand() % MAX_COL;
	if (chessBoard[ROW][COL] != ' ') {
		continue;
	}
	chessBoard[ROW][COL] = 'o';
	break;
    }
}
//判断棋盘是否满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int ROW = 0; ROW < MAX_ROW; ROW++) {
		for (int COL = 0; COL < MAX_COL; COL++) {
			if (chessBoard[ROW][COL] == ' ')
				return 0;
		}
	}
	return 1;
}
//判断胜负
// 此处约定,
// 如果返回 x, 表示 玩家获胜
// 如果返回 o, 表示 电脑获胜
// 如果返回 ' ', 表示胜负未分, 还要继续下棋
// 如果返回 q, 表示和棋
char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	int ROW = 0;
	int COL = 0;
	for (; ROW < MAX_ROW; ROW++) {
		if (chessBoard[ROW][0] != ' '
			&& chessBoard[ROW][1] == chessBoard[ROW][0]
			&& chessBoard[ROW][2] == chessBoard[ROW][0])
			return chessBoard[ROW][0];
	}
	for (int COL = 0; COL < MAX_COL; COL++) {
		if (chessBoard[0][COL] != ' '
			&& chessBoard[1][COL] == chessBoard[0][COL]
			&& chessBoard[2][COL] == chessBoard[0][COL])
			return chessBoard[0][COL];
	}
	if (chessBoard[0][0] == chessBoard[1][1] && chessBoard[2][2] == chessBoard[0][0]&&chessBoard[0][0]!=' ')
		return chessBoard[0][0];
	if (chessBoard[0][2] == chessBoard[1][1] && chessBoard[2][0] == chessBoard[1][1] && chessBoard[2][0] != ' ')
		return chessBoard[0][2];
	if (isFull(chessBoard))return 'q';
	return ' ';
}
int main() {
	char winner = ' ';
	printf("欢迎来到三子棋游戏\n");
	char chessBoard[MAX_ROW][MAX_COL];
	init(chessBoard);
	while (1) {
		print(chessBoard);
		playerMove(chessBoard);
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			break;
		}
		computerMove(chessBoard);
		winner = isGameOver(chessBoard);
			if (winner != ' ')
				break;
	}
	print(chessBoard);
	if (winner == 'x') {
		printf("恭喜您获胜！\n");
	}else if (winner == 'o') {
		printf("您失败了！\n");
	}else printf("此局和棋！\n");
	system("pause");
	return 0;
}
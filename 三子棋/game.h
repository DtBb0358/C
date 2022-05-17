#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////在此定义行和列是为了让每一行每一列可以自己设定，不用再单一的写数字定义，并且可读性变高
////例如，把此处3改成5就变成五子棋了，所以也会很方便
//#define ROW 3      //定义行=3
//#define COL 3     //定义列=3
////声明
//void initboard(char board[ROW][COL], int row, int col);     //定义数组用于接收数组board，同时定义两个形参接收row和col
//
//void DisPalyBoard(char board[ROW][COL], int row, int col);
//
//void PlayerMove(char board[ROW][COL], int row, int col);
//
//void ComputerMove(char board[ROW][COL], int row, int col);
//
////告诉玩家状态
////玩家赢，返回一个字符，比如‘*’
////电脑赢，返回‘#'
////平局，返回'q'
////游戏继续，返回'c'
//char IsWin(char board[ROW][COL], int row, int col);






//第二遍三子棋代码
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//#define ROW 3
//#define COL 3
//
//
////初始化棋盘
//void InitBoard(char board[ROW][COL], int row, int col);
//
////打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col);
//
////玩家下棋
//void player_move(char board[ROW][COL], int row, int col);
//
////电脑下棋
//void computer_move(char board[ROW][COL], int row, int col);
//
////判断输赢的代码
////玩家赢 - '*'
////电脑赢 - '#'
////平均 --- 'Q'
////继续 ----'C'
//
//char is_win(char board[ROW][COL], int row, int col);
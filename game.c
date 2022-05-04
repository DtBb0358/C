#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void initboard(char board[ROW][COL], int row, int col)
//{
//	//初始化即初始化数组中每一个元素为空格
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';//初始化
//		}
//	}
//}
//
//
////void DisPalyBoard(char board[ROW][COL], int row, int col)
////{
////	int i = 0;
////	for (i = 0; i < row; i++)
////	{
////		//打印一行数据
////		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//此处三个%c就写死行了所以这个代码日后修改多行多列会很难看
////		//打印一行分割行,同时做判断，为了美观去掉多打的一行
////		if(i<row-1)
////		printf("---|---|---\n");
////	}
////}
//
////优化代码
//void DisPalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)   //控制要打印几行数据
//	{
//		for (j = 0; j < col; j++)   //打印数据
//		{
//			printf(" %c ", board[i][j]);
//			if(j<col-1)    //最后i一组不用写，所以设置此条件
//			   printf("|");
//		}
//		printf("\n");    //换行
//		//打印分割行
//		if (i < row - 1)   //控制最后一行不用打印
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)  //最后一列不用打印设置此条件
//				{
//					printf("|");
//				}
//			}
//			printf("\n");  //换行
//		}
//	}
//}
//
//
//
////玩家下棋
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家出棋:  \n");
//	while (1)    //重新输入的循环
//	{
//		printf("请输入坐标：->>>  ");
//		scanf("%d%d", &x, &y);
//		//判断输入的坐标的合法性
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')  //因为数组是从0 开始，站在用户角度思考，要每个元素都减去1，才可以对应上用户输入的坐标值
//			{
//				board[x - 1][y - 1] = '*';  //输入表示符号
//				break;
//			}
//			else
//			{
//				printf("该坐标已被占用\n");
//			}
//		}
//		else
//		{
//			printf("输入的坐标错误，请重新输入：>>  \n");
//		}
//    }
//}
//
//
////电脑下棋
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走棋：>>  \n");
//	x = rand()%row;//生成一个随机数,并且控制电脑输出，摸一个行使其不会超出，y同理
//	y = rand()%col;
//	while (1)  //电脑不用告诉返回什么错误，直接重新循环就行
//	{
//		if (board[x - 1][y - 1] == ' ')
//		{
//			board[x - 1][y - 1] = '#';
//			break;
//		}
//	}
//}
//
////返回1表示满，返回0表示没满
//int IsFun(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//没满
//			}
//		}
//	}
//	return 1;//满了
//}
////判断
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//判断一行中三个相等，且不等于空格即赢
//		{
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//判断列
//		{
//			return board[1][i];
//		}
//	}
//	//两个对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
//		return board[1][1];
//	//判断是否继续
//	//没有人赢或者棋盘没位置了
//	if (1 == IsFun(board, ROW, COL))//IsFun()用于判断棋盘是否已满；等于1就是满，反之
//	{
//		return 'q';
//	}
//	return 'c';
//}








#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//版本1
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//分割行
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}


//版本2
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


//玩家下棋
void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>");
	int x = 0;
	int y = 0;

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重输入!\n");
		}
	}
}



void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋>\n");
	while (1)
	{
		x = rand() % ROW;//0~2
		y = rand() % COL;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//对角线的判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	if (1 == is_full(board, row, col))
	{
		return 'Q';
	}
	//继续
	return 'C';
}
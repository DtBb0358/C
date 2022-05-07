#define _CRT_SECURE_NO_WARNINGS
////三子棋
//#include "game.h"
//
//void menu()        //菜单函数
//{
//	printf("*************************************************\n");
//	printf("*****         1`play         0`exit         *****\n");
//	printf("*************************************************\n");
//	printf("                         tip:此程序全程靠数字操作，请勿输入字母\n");
//}


//游戏实现逻辑
//void game()
//{
//	char ret = 0;  //用于接收IsWin的返回值
//	//数组存放走出的棋盘信息
//	char board[ROW][COL] = { 0 };//一开始数组内容全部都是空格，这样子看起来就好像什么都没有的一个期盼等待棋子下落，即为了美观并且合理，下棋即下字符
//	//此处{}写入0，其实也是不可见的
//	//初始化棋盘(本质：初始化数组),放入row和col是为了知道几行几列更好的初始化
//	initboard(board, ROW, COL);   //属于游戏模块的相关代码
//	//打印棋盘(本质还是打印数组)
//	DisPalyBoard(board, ROW, COL);
//	//下棋，你一步我一步，所以判断应该是循环函数
//	while (1)  //放置1即一直下直到有人赢
//	{
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		DisPalyBoard(board, ROW, COL);//用于再次打印棋盘
//		//判断玩家是否赢
//		ret = IsWin(board, ROW, COL);//接收数据，用于判断
//		if (ret != 'c')   //只有GAME是游戏继续，其余结果游戏都结束了，所以当ret不等于GAME 时可以进行其余三种结果判断，其中就有玩家的结果判断;;;电脑同理
//		{
//			break;
//		}
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		DisPalyBoard(board, ROW, COL);//用于再次打印棋盘
//		//判断电脑是否赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//	}
//	if (ret == '*')//用单引号会出现，字符常量中字符过多的问题
//	{
//		printf("玩家赢了！！！\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢了！！\n");
//	}
//	else
//	{
//		printf("平局！\n");
//	}
//}

//void game()   //游戏实现函数
//{
//	char board[ROW][COL] = { 0 };//棋盘初始值为0
//	initboard(board, ROW, COL);//初始化棋盘为空格
//	DisPalyBoard(board, ROW, COL);//打印棋盘
//	char ret;//接收判断结果的符号变量（返回C表示都没有赢继续走，返回Q表示格子已被走完）
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);//玩家走
//		DisPalyBoard(board, ROW, COL);//打印棋盘
//		ret = IsWin(board, ROW, COL);//判断玩家是否赢
//		if (ret != 'c')
//		{
//			break;
//		}
//
//		ComputerMove(board, ROW, COL);//电脑走
//		DisPalyBoard(board, ROW, COL);//打印棋盘
//		ret = IsWin(board, ROW, COL);  //判断电脑是否赢
//		if (ret != 'c')
//		{
//			break;  //跳出循环，进行结果判断
//		}
//	}
//	if (ret == '*')
//	{
//		printf("你赢了\n");
//	}
//	else if (ret == '#')
//	{
//		printf("你输了\n");
//	}
//	else
//	{
//		printf("平局\n");
//	}
//}
//void test_1()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//用srand配合rand函数使用，并且使用时间戳来输入,unsigned控制输出无符号类型数
//	do            //使用do...while是为了可以一直玩
//	{
//		menu();
//		printf("请选择:>>   ");
//		scanf("%d", &input);
//		//getchar();//该函数能够吸收掉我输入的英文字母q,这样就会终止循环,让玩家重新选择,如果我们正常输入数字也没问题,因为getchar()会吸收掉我们最后敲的回车,不会影响程序的后续进行
//		switch (input)
//		{
//		case 1:
//			//printf("开始--三子棋--游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);        //放入input，当input为假即=0退出游戏（循环）；反之都为真，进入while循环，可以继续游戏和一直玩。
//}
//int main()
//{
//	test_1();
//	return 0;
//}





//也是三子棋代码，只不过又写了一遍
//#include "game.h"
//
//void menu()
//{
//	printf("************************\n");
//	printf("*****   1. play   ******\n");
//	printf("*****   0. exit   ******\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//数据存储到一个字符的二维数组中，玩家下棋是'*',电脑下棋是'#',
//	char board[ROW][COL] = { 0 };//数组的内容应该是全部空格
//	InitBoard(board, ROW, COL);//初始化棋牌
//	//打印棋盘
//	DisplayBoard(board, ROW, COL);
//	//下棋
//	char ret = 0;
//	while (1)
//	{
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		computer_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢\n");
//	}
//	else
//	{
//		printf("平局\n");
//	}
//}
//
//
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
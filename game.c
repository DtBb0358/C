#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void initboard(char board[ROW][COL], int row, int col)
//{
//	//��ʼ������ʼ��������ÿһ��Ԫ��Ϊ�ո�
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';//��ʼ��
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
////		//��ӡһ������
////		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//�˴�����%c��д������������������պ��޸Ķ��ж��л���ѿ�
////		//��ӡһ�зָ���,ͬʱ���жϣ�Ϊ������ȥ������һ��
////		if(i<row-1)
////		printf("---|---|---\n");
////	}
////}
//
////�Ż�����
//void DisPalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)   //����Ҫ��ӡ��������
//	{
//		for (j = 0; j < col; j++)   //��ӡ����
//		{
//			printf(" %c ", board[i][j]);
//			if(j<col-1)    //���iһ�鲻��д���������ô�����
//			   printf("|");
//		}
//		printf("\n");    //����
//		//��ӡ�ָ���
//		if (i < row - 1)   //�������һ�в��ô�ӡ
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)  //���һ�в��ô�ӡ���ô�����
//				{
//					printf("|");
//				}
//			}
//			printf("\n");  //����
//		}
//	}
//}
//
//
//
////�������
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("��ҳ���:  \n");
//	while (1)    //���������ѭ��
//	{
//		printf("���������꣺->>>  ");
//		scanf("%d%d", &x, &y);
//		//�ж����������ĺϷ���
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')  //��Ϊ�����Ǵ�0 ��ʼ��վ���û��Ƕ�˼����Ҫÿ��Ԫ�ض���ȥ1���ſ��Զ�Ӧ���û����������ֵ
//			{
//				board[x - 1][y - 1] = '*';  //�����ʾ����
//				break;
//			}
//			else
//			{
//				printf("�������ѱ�ռ��\n");
//			}
//		}
//		else
//		{
//			printf("���������������������룺>>  \n");
//		}
//    }
//}
//
//
////��������
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("�������壺>>  \n");
//	x = rand()%row;//����һ�������,���ҿ��Ƶ����������һ����ʹ�䲻�ᳬ����yͬ��
//	y = rand()%col;
//	while (1)  //���Բ��ø��߷���ʲô����ֱ������ѭ������
//	{
//		if (board[x - 1][y - 1] == ' ')
//		{
//			board[x - 1][y - 1] = '#';
//			break;
//		}
//	}
//}
//
////����1��ʾ��������0��ʾû��
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
//				return 0;//û��
//			}
//		}
//	}
//	return 1;//����
//}
////�ж�
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж�һ����������ȣ��Ҳ����ڿո�Ӯ
//		{
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//�ж���
//		{
//			return board[1][i];
//		}
//	}
//	//�����Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
//		return board[1][1];
//	//�ж��Ƿ����
//	//û����Ӯ��������ûλ����
//	if (1 == IsFun(board, ROW, COL))//IsFun()�����ж������Ƿ�����������1����������֮
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

//�汾1
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//�ָ���
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}


//�汾2
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//�ָ���
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


//�������
void player_move(char board[ROW][COL], int row, int col)
{
	printf("�������:>");
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
				printf("�����걻ռ�ã����������룡\n");
			}
		}
		else
		{
			printf("����Ƿ�����������!\n");
		}
	}
}



void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������>\n");
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
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�Խ��ߵ��ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	if (1 == is_full(board, row, col))
	{
		return 'Q';
	}
	//����
	return 'C';
}
#define _CRT_SECURE_NO_WARNINGS
////������
//#include "game.h"
//
//void menu()        //�˵�����
//{
//	printf("*************************************************\n");
//	printf("*****         1`play         0`exit         *****\n");
//	printf("*************************************************\n");
//	printf("                         tip:�˳���ȫ�̿����ֲ���������������ĸ\n");
//}


//��Ϸʵ���߼�
//void game()
//{
//	char ret = 0;  //���ڽ���IsWin�ķ���ֵ
//	//�������߳���������Ϣ
//	char board[ROW][COL] = { 0 };//һ��ʼ��������ȫ�����ǿո������ӿ������ͺ���ʲô��û�е�һ�����εȴ��������䣬��Ϊ�����۲��Һ������弴���ַ�
//	//�˴�{}д��0����ʵҲ�ǲ��ɼ���
//	//��ʼ������(���ʣ���ʼ������),����row��col��Ϊ��֪�����м��и��õĳ�ʼ��
//	initboard(board, ROW, COL);   //������Ϸģ�����ش���
//	//��ӡ����(���ʻ��Ǵ�ӡ����)
//	DisPalyBoard(board, ROW, COL);
//	//���壬��һ����һ���������ж�Ӧ����ѭ������
//	while (1)  //����1��һֱ��ֱ������Ӯ
//	{
//		//�������
//		PlayerMove(board, ROW, COL);
//		DisPalyBoard(board, ROW, COL);//�����ٴδ�ӡ����
//		//�ж�����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);//�������ݣ������ж�
//		if (ret != 'c')   //ֻ��GAME����Ϸ��������������Ϸ�������ˣ����Ե�ret������GAME ʱ���Խ����������ֽ���жϣ����о�����ҵĽ���ж�;;;����ͬ��
//		{
//			break;
//		}
//		//��������
//		ComputerMove(board, ROW, COL);
//		DisPalyBoard(board, ROW, COL);//�����ٴδ�ӡ����
//		//�жϵ����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//		{
//			break;
//		}
//	}
//	if (ret == '*')//�õ����Ż���֣��ַ��������ַ����������
//	{
//		printf("���Ӯ�ˣ�����\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ�ˣ���\n");
//	}
//	else
//	{
//		printf("ƽ�֣�\n");
//	}
//}

//void game()   //��Ϸʵ�ֺ���
//{
//	char board[ROW][COL] = { 0 };//���̳�ʼֵΪ0
//	initboard(board, ROW, COL);//��ʼ������Ϊ�ո�
//	DisPalyBoard(board, ROW, COL);//��ӡ����
//	char ret;//�����жϽ���ķ��ű���������C��ʾ��û��Ӯ�����ߣ�����Q��ʾ�����ѱ����꣩
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);//�����
//		DisPalyBoard(board, ROW, COL);//��ӡ����
//		ret = IsWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
//		if (ret != 'c')
//		{
//			break;
//		}
//
//		ComputerMove(board, ROW, COL);//������
//		DisPalyBoard(board, ROW, COL);//��ӡ����
//		ret = IsWin(board, ROW, COL);  //�жϵ����Ƿ�Ӯ
//		if (ret != 'c')
//		{
//			break;  //����ѭ�������н���ж�
//		}
//	}
//	if (ret == '*')
//	{
//		printf("��Ӯ��\n");
//	}
//	else if (ret == '#')
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
//	}
//}
//void test_1()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��srand���rand����ʹ�ã�����ʹ��ʱ���������,unsigned��������޷���������
//	do            //ʹ��do...while��Ϊ�˿���һֱ��
//	{
//		menu();
//		printf("��ѡ��:>>   ");
//		scanf("%d", &input);
//		//getchar();//�ú����ܹ����յ��������Ӣ����ĸq,�����ͻ���ֹѭ��,���������ѡ��,�������������������Ҳû����,��Ϊgetchar()�����յ���������õĻس�,����Ӱ�����ĺ�������
//		switch (input)
//		{
//		case 1:
//			//printf("��ʼ--������--��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);        //����input����inputΪ�ټ�=0�˳���Ϸ��ѭ��������֮��Ϊ�棬����whileѭ�������Լ�����Ϸ��һֱ�档
//}
//int main()
//{
//	test_1();
//	return 0;
//}





//Ҳ����������룬ֻ������д��һ��
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
//	//���ݴ洢��һ���ַ��Ķ�ά�����У����������'*',����������'#',
//	char board[ROW][COL] = { 0 };//���������Ӧ����ȫ���ո�
//	InitBoard(board, ROW, COL);//��ʼ������
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//	//����
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
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
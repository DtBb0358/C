#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//这个主函数是猜数字游戏之前的所有主函数调用
//{
//	//	int a = 1;
//	//	while (a <= 100)
//	//	{
//	//		printf("%d ", a);
//	//		a += 2;
//	//	}
//	//	return 0;
//	//}
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;  //m=3
//	case 2:
//		n++; //n=2
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;  //n此时=2，所以执行case2
//		case 2:
//			m++; //m=4
//			n++; //n=3
//			break;
//		}
//	case 4:
//		m++;  //m=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d\n", m, n); //输出m=5  n=3
//	return 0;
//}



// {
//	int n = 0;
//	int m = 0;
//	int sum = 1;  //不可任意初始赋值0，先赋值一个1，因为赋值0怎么乘都是0
//	scanf("%d", &m);//用于自己输入一个数字求它的阶乘
//	for (n = 1; n <= m; n++)  //没有考虑溢出的情况
//	{
//		sum = sum * n;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}




//
//{
//	int n = 0;
//	int m = 0;
//	int ret = 1;
//	int sum = 0;
//for (m = 1; m <= 3; m++)
//{
//	int ret = 1;//用于求和，每次都应该从初始开始，否则就会累加起来，比如求前三项，不写ret=1结果为15 ，就是三次结构累加了。 
//	for (n = 1; n <= m; n++)//此下发不够好，优化代码如下
//	{
//		ret = ret * n;
//	}
//	sum = sum + ret;
//}
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("ret=%d\n", sum);
//	return 0;
//}



//{  //比较三个整数的大小并排序
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//输出1-100之间能被3整除的整数
//{
//int i = 0;
//for (i = 1; i <= 100; i++)
//{
//	if (i % 3 == 0)
//	{
//		printf("%d ", i);
//	}
//}
//return 0;
//}


//求两个数的最大公约数----辗转i相除法
//{
//int m = 0;
//int n = 0;
//int r = 0;
//scanf("%d%d", &m, &n);
//while (m % n)//代码简化，可以吧下述r = m % n;放到while()中，效果一样
//{
//	r = m % n;
//	m = n;
//	n = r;
//}
//printf("%d", r);
//return 0;
//}


//打印1000--2000年之间的闰年
//判断标准：1能被4整除并且不能被100整除的是闰年
//判断标准：2能被400整除的是闰年
//{
//int year = 0;
//int count = 0;//用于计算一共有多少个闰年
//for (year = 1000; year <= 2000; year++)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d\n", year);
//		count++;
//	}
//	else
//		if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//}
// 
//代码优化
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d\n", year);
//					count++;
//	}
//}
//printf("\ncount=%d\n", count);
//return 0;
//}


//求100--200之间的素数
//试除法：比如13，则用2--12的去试除。
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (a == b)
//		{
//			count++;//计算多少个素数
//			printf("%d\n", a);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}



//乘法口诀表
//{
//int a = 0;
//for (a = 1; a < 10; a++)
//{
//	int b = 0;
//	for (b = 1; b < a; b++)
//	{
//		printf("%d*%d=%-2d ", a, b, a * b);
//	}
//	printf("\n");
//}
//return 0;
//}


//猜数字游戏
//#include <time.h>//time（）的头文件
//#include <stdlib.h>//rand（）和srand（）的头文件
//void menu()//写一个菜单，用于更好的显示
//{
//	printf("**************************************\n");
//	printf("******   1.play    0.exit    *********\n");
//	printf("**************************************\n");
//}
//void game()
//{
//	//1生成随机数
//	int ret = 0;//生成随机数的接收
//	int guess = 0;//用于猜数字里面的接收
//	ret = rand()%100+1;//生成随机数但函数，使用前耀用srand()设定起点；取模100后范围为0到99，再加1，变成1到100，即让随机数生成的范围变小。可玩性变高
//	//printf("%d\n",ret);  这个是为了打印数字验证对错的
//	// 
//	//2猜数字
//	while (1)
//	{
//		printf("猜数字>:");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("哎呀，猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("哎呀，猜小了\n");
//		}
//		else
//		{
//			printf("恭喜，猜对了！！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//使用时间戳来生成随机数，放到靠上的位置，是为了避免频繁使用导致生成的随机数距离过近，比如放到game()函数中就会出现此情况
//	int input = 0;
//	do                      //使用do...while循环结构是因为至少执行一次
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);//输入数字在下列进行判断
//		switch (input)
//		{
//		case 1:
//			game();//游戏函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//	} while (input);//放入input使得游戏可以重复进行，并且也没有错误，输入1为真循环再来一次；输入0为假重新魂环，其他数字也一样
//return 0;
//}


//通过函数判断100到200之间的素数
//int prime(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 100; y < 200; y++)
//	{
//		if(prime(y)==1)
//		printf("%d\n", y);
//	}
//	return 0;
//}


//通过函数打印1000到2000年之间的闰年
//int years(int u)
//{
//	if (u % 4 == 0 && u % 100 != 0 || u % 400 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == years(year))
//		{
//			printf("%d\n",year);
//		}
//	}
//	return 0;
//}



//用二分法查找数组
//找到返回元素下标，否则返回-1
//int binary(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	//left与right交错时就没有元素可以查找了
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//通过总字节除以数组中的任意的一个元素的字节，来达到求一个数组中有多少元素
//	ret = binary(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("找到了：%d\n", ret);
//	}
//	return 0;
//}



//每调用一次函数，num都加1
//void add(int* p)//不需要函数返回值所以使用void
//{
//	(*p)++;//加括号是因为++优先级大于*，不加达不到目的需求
//}
//int main()
//{
//	int num = 0;
//	add(&num);//应该使用传址，从而可以改变num的值
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//用递归求n的阶乘（不考虑溢出）
//int afcn(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * afcn(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = afcn(n);
//	printf("%d\n", ret);
//	return 0;
//}



////在键盘上输入一个整数，判断其是不是100到200之间的整数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 100 && a < 200)
//	{
//		printf("是此区间范围内的整数，为：%d\n", a);
//	}
//	else
//	{
//		printf("不是此区间范围内的整数\n");
//	}
//	return 0;
//}




//6==6==6的值是多少
//int main()
//{
//	long a = 6 == 6 == 6;//==是关系运算符，前一个6==6为真输出1，然后后一个变成1==6为假，所以输出0，最后结果也为0
//	printf("%d", a);
//	return 0;
//}



//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int falg = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j < arr[j + 1]])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				falg = 0;
//			}
//		}
//		if (falg==1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//不使用临时变量，使a和b交换数值
int main()
{
	int a = 6;
	int b = 9;
	printf("before:  a=%d b=%d", &a, &b);

	return 0;
}


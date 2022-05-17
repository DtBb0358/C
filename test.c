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



//不适用第三变量，使得a和b交换数值
//int main()
//{
//	int a = 6;
//	int b = 9;
//	printf("before: a=%d  b=%d\n", a, b);
//	////使用加减法，但是存在数值过大会溢出的情况，并不好
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after: a=%d  b=%d", a, b);
//
//	//使用位操作符，按位异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a=%d b=%d", a, b);
//	return 0;
//}//实际上还是写一个临时变量更好，可读性高，效率也高



//统计一个整数二进制中1的个数（不考虑溢出）
//思路：输入一个数字，然后使其模2得到个位1然后以此类推，同时除2去掉那一位进行十位即下一位，即模2除2
// //方法一
//int count_die(unsigned n)   //使用unsigned无符号数，是为了负数考虑，使负数的符号位变成有效位，这样就可以进行这个循环的计算求得正确结果（也就是将其变成为有效位后，也就变成了一个很大的数字来进行运算）
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//方法二
//int count_die(int n)
//{
//	int count = 0;
//	int i = 0;
//	//此方法通过位操作符实现，按位与逐位进行与1的判断，通过位移操作符实现
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法三
//方法二总是会循环32次，所以采取更高效的写法
//int count_die(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		//依然是使用按位与，不过这次通过n与n-1进行按位与比较，即比较次数即为1的个数
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制，实现上述功能（内存中存储的是其补码）
//	int count = count_die(a);
//	printf("count=%d\n", count);
//	return 0;
//}


//求两个数二进制中不同位的个数
//int count_coll(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//调用
//	//return count_die(tmp);//通过异或来实现不同进制位的个数统计，再通过count_die这个函数统计tmp中有几个1就有几个进制位不同
//
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int count = count_coll(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}




////打印一个二进制中奇数位和偶数位序列
//void print(int m)
//{
//	int i = 0;
////判断方法：奇数位（由于计算机对应第一位为0，所以最右边从0位开始）则0，2，4.。。。共30位，偶数位1，3，5.。。。共31位
////然后通过将每一位都位移到最后一位然后按位与1得到最后一位数字，这样子就可以打印出奇数位和偶数位的对应的数字序列
//	//从高位开始位移
//	printf("奇数位");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}



//使用指针遍历
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//输入任意数字，打印对应数字行数的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=-3%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//计算阶乘的和，不考虑溢出
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;//用于最终计算结果的输出和接收
//	int ret = 1;//用于保存n的阶乘
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//初始化ret，否则会累加
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum= %d\n", sum);
//	return 0;
//}



//判断大小端
// int a = 1；即为0x00000001；所以判断时是需要判断01和00，即1和0；所以用指针强制转换类型（避免警告）并且解引用，取得地址与ret==1进行判断返回结果
//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int main()
//{
//	//封装一个函数，用于判断
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//int main()
//{
//	unsigned int i;//此处定义了一个无符号整数，下方i>=0就没有限制作用了，当循环到-1时变成一个非常大的数字然后死循环
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}



//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	//通过指针打印三个数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *((parr[i])+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//p指向一行，+i就等于跳过i行就指向下标为i的这一行，就相当于拿到这一行的数组名，再加上j就确定了具体的元素位置
//			//即，p+i是找到那一行，再解引用*就真的找到那一行的地址，再确定j就确定了具体元素：也可以这样写(*(p+i)[j])
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//����������ǲ�������Ϸ֮ǰ����������������
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
//			n++;  //n��ʱ=2������ִ��case2
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
//	printf("m=%d\nn=%d\n", m, n); //���m=5  n=3
//	return 0;
//}



// {
//	int n = 0;
//	int m = 0;
//	int sum = 1;  //���������ʼ��ֵ0���ȸ�ֵһ��1����Ϊ��ֵ0��ô�˶���0
//	scanf("%d", &m);//�����Լ�����һ�����������Ľ׳�
//	for (n = 1; n <= m; n++)  //û�п�����������
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
//	int ret = 1;//������ͣ�ÿ�ζ�Ӧ�ôӳ�ʼ��ʼ������ͻ��ۼ�������������ǰ�����дret=1���Ϊ15 ���������νṹ�ۼ��ˡ� 
//	for (n = 1; n <= m; n++)//���·������ã��Ż���������
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



//{  //�Ƚ����������Ĵ�С������
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



//���1-100֮���ܱ�3����������
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


//�������������Լ��----շתi�����
//{
//int m = 0;
//int n = 0;
//int r = 0;
//scanf("%d%d", &m, &n);
//while (m % n)//����򻯣����԰�����r = m % n;�ŵ�while()�У�Ч��һ��
//{
//	r = m % n;
//	m = n;
//	n = r;
//}
//printf("%d", r);
//return 0;
//}


//��ӡ1000--2000��֮�������
//�жϱ�׼��1�ܱ�4�������Ҳ��ܱ�100������������
//�жϱ�׼��2�ܱ�400������������
//{
//int year = 0;
//int count = 0;//���ڼ���һ���ж��ٸ�����
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
//�����Ż�
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


//��100--200֮�������
//�Գ���������13������2--12��ȥ�Գ���
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
//			count++;//������ٸ�����
//			printf("%d\n", a);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}



//�˷��ھ���
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


//��������Ϸ
//#include <time.h>//time������ͷ�ļ�
//#include <stdlib.h>//rand������srand������ͷ�ļ�
//void menu()//дһ���˵������ڸ��õ���ʾ
//{
//	printf("**************************************\n");
//	printf("******   1.play    0.exit    *********\n");
//	printf("**************************************\n");
//}
//void game()
//{
//	//1���������
//	int ret = 0;//����������Ľ���
//	int guess = 0;//���ڲ���������Ľ���
//	ret = rand()%100+1;//�����������������ʹ��ǰҫ��srand()�趨��㣻ȡģ100��ΧΪ0��99���ټ�1�����1��100��������������ɵķ�Χ��С�������Ա��
//	//printf("%d\n",ret);  �����Ϊ�˴�ӡ������֤�Դ��
//	// 
//	//2������
//	while (1)
//	{
//		printf("������>:");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("��ѽ���´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��ѽ����С��\n");
//		}
//		else
//		{
//			printf("��ϲ���¶��ˣ���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//ʹ��ʱ�����������������ŵ����ϵ�λ�ã���Ϊ�˱���Ƶ��ʹ�õ������ɵ�������������������ŵ�game()�����оͻ���ִ����
//	int input = 0;
//	do                      //ʹ��do...whileѭ���ṹ����Ϊ����ִ��һ��
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);//�������������н����ж�
//		switch (input)
//		{
//		case 1:
//			game();//��Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);//����inputʹ����Ϸ�����ظ����У�����Ҳû�д�������1Ϊ��ѭ������һ�Σ�����0Ϊ�����»껷����������Ҳһ��
//return 0;
//}


//ͨ�������ж�100��200֮�������
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


//ͨ��������ӡ1000��2000��֮�������
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



//�ö��ַ���������
//�ҵ�����Ԫ���±꣬���򷵻�-1
//int binary(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	//left��right����ʱ��û��Ԫ�ؿ��Բ�����
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//ͨ�����ֽڳ��������е������һ��Ԫ�ص��ֽڣ����ﵽ��һ���������ж���Ԫ��
//	ret = binary(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û���ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%d\n", ret);
//	}
//	return 0;
//}



//ÿ����һ�κ�����num����1
//void add(int* p)//����Ҫ��������ֵ����ʹ��void
//{
//	(*p)++;//����������Ϊ++���ȼ�����*�����Ӵﲻ��Ŀ������
//}
//int main()
//{
//	int num = 0;
//	add(&num);//Ӧ��ʹ�ô�ַ���Ӷ����Ըı�num��ֵ
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//�õݹ���n�Ľ׳ˣ������������
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



////�ڼ���������һ���������ж����ǲ���100��200֮�������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 100 && a < 200)
//	{
//		printf("�Ǵ����䷶Χ�ڵ�������Ϊ��%d\n", a);
//	}
//	else
//	{
//		printf("���Ǵ����䷶Χ�ڵ�����\n");
//	}
//	return 0;
//}




//6==6==6��ֵ�Ƕ���
//int main()
//{
//	long a = 6 == 6 == 6;//==�ǹ�ϵ�������ǰһ��6==6Ϊ�����1��Ȼ���һ�����1==6Ϊ�٣��������0�������ҲΪ0
//	printf("%d", a);
//	return 0;
//}



//ð������
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



//��ʹ����ʱ������ʹa��b������ֵ
int main()
{
	int a = 6;
	int b = 9;
	printf("before:  a=%d b=%d", &a, &b);

	return 0;
}


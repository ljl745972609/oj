//#include<stdio.h>
//
//int main()
//
//{
//
//	int a[100001], b, n, m, i, j;
//
//	while (~scanf("%d", &n))
//
//	{
//
//		m = 0; a[0] = 1;
//
//		for (i = 1; i <= n; i++)
//
//		{
//
//			b = 0;
//
//			for (j = 0; j <= m; j++)
//
//			{
//
//				a[j] = a[j] * i + b;
//
//				b = a[j] / 100000;
//
//				a[j] = a[j] % 100000;
//
//			}//数组存数
//
//			if (b>0)
//
//			{
//
//				m++;
//
//				a[m] = b;
//
//			}
//
//		}
//
//		printf("%d", a[m]);//将最高位的几位数分开输出,避开前置补0.
//
//		for (i = m - 1; i >= 0; i--)
//
//			printf("%05d", a[i]);//每5位一输出
//
//		printf("\n");
//
//	}
//
//	return 0;
//
//}

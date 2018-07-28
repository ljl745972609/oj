//# include<stdio.h>
//#include<malloc.h>
//
//int main()
//{
//	int N, i;
//	while (scanf("%d", &N) != EOF)
//	{
//		int count = 1, curIndex = 0;
//		int *num = (int *)malloc(N * sizeof(int));
//		for (i = 0; i<N; i++)
//		{
//			scanf("%d", num + i);
//		}
//		for (i = 1; i<N; i++)
//		{
//			if (num[i] == num[curIndex])
//				count++;
//			else
//				count--;
//			if (count <= 0)
//			{
//				count = 1;
//				curIndex = i + 1;
//				i = curIndex;
//			}
//		}
//		printf("%d\n", num[curIndex]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int a[110];
//char s[110], str[110];
//void add(char s[], int a[])
//{
//	int b[110];
//	int i, j, len;
//	memset(b, 0, sizeof(b));
//	len = strlen(s);
//	for (i = 0; i<len; i++)
//	{
//		b[len - i - 1] = s[i] - '0';
//	}
//	for (i = 0; i<len; i++)
//	{
//		a[i] = a[i] + b[i];
//		if (a[i]>9)
//		{
//			a[i] = a[i] - 10;
//			a[i + 1]++;
//		}
//
//	}
//}
//
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//	while (n--)
//	{
//		memset(a, 0, sizeof(a));
//		while (scanf("%s", &str) && strcmp(str, "0") != 0)
//			add(str, a);
//		for (i = 109; i>0; i--)
//		{
//			if (a[i] != 0)
//				break;
//		}
//		for (; i >= 0; i--)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		if (n != 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
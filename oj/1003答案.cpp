//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int n, T, num, sum, maxn, s, e, temp; int t = 0;
//	cin >> T;
//	while (T--)
//	{
//		sum = 0;
//		maxn = -101;
//		s = e = temp = 1;
//		cin >> n;
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> num;
//			sum += num;
//			if (sum>maxn)
//			{
//				maxn = sum;
//				e = i;
//				s = temp;
//
//			}
//			else if (sum<0)
//			{
//				sum = 0;
//				temp = i + 1;
//
//			}
//		}
//
//		cout << "Case " << ++t << ":" << endl
//			<< maxn << " " << s << " " << e << endl;
//		if (T)
//			cout << endl;
//
//	}
//
//	return 0;
//}
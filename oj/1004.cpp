//#include<iostream>
//#include<string>
//
//using namespace std;
//int main()
//{
//	int size;
//	while (true)
//	{
//		cin >> size;
//		if (size == 0) break;
//		int max = 0, sum = 0,index = 0;
//		string* str = new string[10];
//		for (int i = 0; i < size; i++)
//		{
//			cin >> str[i];
//			for (int j = 0; j <= i; j++)
//			{
//				if (str[i].compare(str[j]))
//				{
//					sum++;
//					if (sum > max)
//					{
//						max = sum;
//						index = i;
//					}
//				}
//			}
//		}
//		cout << str[index] << endl;
//	}
//
//	return 0;
//}
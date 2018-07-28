//#include<iostream>
//#include<string>
//using namespace std;
//int charToInt(char a) {
//	return a - '0';
//}
//char intToChar(int i) {
//	return i + '0';
//}
//char* sum(char a[], char b[],char *result)
//{
//	int lenA = strlen(a), lenB = strlen(b);
//	int max = (lenA > lenB ? lenA : lenB) ;
//
//	int flag = 0;
//	int temp = 0;
//	int i = lenA - 1, j = lenB - 1;
//	while (true)
//	{
//		if (i >= 0 && j >= 0)
//		{
//			temp = charToInt(a[i]) + charToInt(b[j]) + flag;
//		}
//		if (i < 0 && j >= 0)
//		{
//			temp = charToInt(b[j]) + flag;
//		}
//		if (i >= 0 && j < 0)
//		{
//			temp = charToInt(a[i]) + flag;
//		}
//		if (i < 0 && j < 0)
//		{
//			break;
//		}
//		result[max] = intToChar(temp % 10);
//		flag = temp / 10;
//		max--, i--, j--;
//	}
//	result[0] = intToChar(flag);
//	return result;
//}
//
//int main()
//{
//	int count = 0;
//	cin >> count;
//	while (count > 0)
//	{
//		int k = 1;
//		char a[1000] = { 0 }, b[1000] = { 0 }, result[1000] = {0};
//		cin >> a >> b;
//		sum(a, b, result);
//		int i = 0;
//		if (result[0] == '0') {
//			i = 1;
//		}
//		cout << "case " << k << ":" << endl;
//		cout << a << " + " << b << " = ";
//		for (i; i < strlen(result); i++)
//		{
//			cout << result[i];
//		}
//		cout << endl << endl;
//		k++;
//		count--;
//	}
//	return 0;
//
//}
//#include<iostream>
//#include<string>
//#define INT(x) (x-'0')
//#define CHAR(X) (X+'0')
//using namespace std;
//
//#define DEBUG 1
//#include"function.h"
//string input = "1047.in";
//string output = "1047.out";
//
//
//void toChar(string s,char temp[101]) {
//	memset(temp, '0', 101);
//	int len = s.length();
//	for (int i = len - 1,j=0; i >= 0; i--,j++) {
//		temp[100-j] = s.at(i);
//	}
//}
//
//
//int main()
//{
//	debug(input, output);
//	
//	char result[101] = { '0' };
//	char temp[101] = { '0' };
//	memset(result, '0', 101);
//	memset(temp, '0', 101);
//	
//	int rnd;		// ��¼�����
//	cin >> rnd;
//	while (rnd--) {
//		string value;	// ÿ�е��ַ���
//		int max = 0;
//		memset(result, '0', 101);
//		while (cin >> value && value != "0") {
//
//			// ���� result + temp 
//			toChar(value, temp);		// �� string ת���� char[]
//			int c = 0;		// ��λ��־
//			int sum = 0;
//			for (int i = 100; i >= 0; i--) {
//				sum = INT(result[i]) + INT(temp[i]) + c;
//				c = sum / 10;
//				result[i] = CHAR(sum % 10);
//			}
//		}
//		int flag = 0;
//		for (int i = 0; i < 101; i++) {
//			if (result[i] != '0')
//			{
//				flag = 1;
//			}
//			if ((result[i] == '0'&&flag)||result[i]!='0') {
//				cout << result[i];
//			}
//		}
//		cout << endl;
//		if (rnd==0) {
//			cout << endl;
//		}
//	}
//	return 0;
//}
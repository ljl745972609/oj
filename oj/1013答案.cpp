//#include<iostream>
//#include<string>
//#include<fstream>
//#include<stdio.h>
////
////#define DEBUG 1
////
////#if DEBUG == 1
////
////#define IN_PATH "D:/vs2015Project/oj/resource/1013.in"
////#define OUT_PATH "D:/vs2015Project/oj/resource/1013.out"
////
////#endif // DEBUG
//
//using namespace std;
//
//int charToint(char c) {
//	return c - '0';
//}
//
//
//int getInt(string n) {
//	int size = n.size();
//	int temp = 0;
//	for (int i = 0; i < size; i++) {
//		temp += (charToint(n.at(i)));
//	}
//
//	return temp;
//}
//int getRoots(int n) {
//	int sum = 0;
//	loop:
//	while (n >= 1) {
//		sum += (n % 10);
//		n = n / 10;
//	}
//	if (sum >= 10) {
//		n = sum;
//		sum = 0;
//		goto loop;
//	}
//	return sum;
//}
//int main() {
//	//if (DEBUG==1) {
//	//	FILE *fin;
//	//	FILE *fout;
//	//	freopen_s(&fin,IN_PATH, "r",stdin);
//	//	freopen_s(&fout, OUT_PATH, "w", stdout);
//	//}
//	string n;
//	while (cin >> n && n != "0") {
//		cout << getRoots(getInt(n)) << endl;
//	}
//	return 0;
//}
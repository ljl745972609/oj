//#include<iostream>
//
//using namespace std;
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//int getLcm(int a, int b) {
//	return a / gcd(a, b) * b;
//}
//
//int main()
//{
//	//int debug = 0;
//	//if (debug) {
//	//	FILE *fin;
//	//	FILE *fout;
//	//	freopen_s(&fin, "D:/vs2015Project/oj/resource/1019.in", "r", stdin);
//	//	freopen_s(&fout, "D:/vs2015Project/oj/resource/1019.out", "w", stdout);
//	//}
//
//
//	int round;
//	cin >> round;
//	for (int i = 0; i < round; i++) {
//		int a = 0,t;
//		int temp = 1;
//		cin >> a;
//		for (int i = 0; i < a; i++) {
//			cin >> t;
//			temp = getLcm(temp,t);
//		}
//
//		cout << temp << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//
//#define MAX 30
//using namespace std;
//
//int rules[MAX] = { 0 };
//int mod[8] = { 0 };
//void init() {
//	rules[0] = 7;
//	rules[1] = 11;
//	for (int i = 2; i < MAX; i++) {
//		rules[i] = rules[i - 1] + rules[i - 2];
//	}
//	for (int i = 0; i < 8; i++) {
//		mod[i] = rules[i] % 3;
//	}
//}
//int main() {
//	init();
//	int debug = 0;
//	if (debug) {
//		FILE *fin;
//		FILE *fout;
//		freopen_s(&fin, "D:/vs2015Project/oj/resource/1021.in", "r", stdin);
//		freopen_s(&fout, "D:/vs2015Project/oj/resource/1021.out", "w", stdout);
//	}
//	int n;
//	while (cin >> n && n != EOF) {
//		if (mod[n % 8] == 0) {
//			cout << "yes" << endl;
//		}
//		else {
//			cout << "no" << endl;
//		}
//	}
//	return 0;
//}
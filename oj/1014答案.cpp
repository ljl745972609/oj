//#include<iostream>
//#include<stdio.h>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	//int debug = 1;
//	//if (debug) {
//	//	FILE *fin;
//	//	FILE *fout;
//	//	freopen_s(&fin, "D:/vs2015Project/oj/resource/1014.in", "r", stdin);
//	//	freopen_s(&fout, "D:/vs2015Project/oj/resource/1014.out", "w", stdout);
//	//}
//	int step, mod;
//	while (cin >> step >> mod ) {
//		int count = 0,seed = 0;
//		int * round = new int[mod];
//		memset(round, 0, mod);
//		int flag = 1;
//		seed = (0 + step) % mod;
//		round[seed] = 1;
//		while (seed != 0) {
//			seed = (seed + step) % mod;
//			round[seed] = 1;
//		}
//		for (int i = 0; i < mod; i++) {
//			if (round[i] == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		printf("%10d%10d    ", step, mod);
//		if (flag) cout << "Good Choice" << endl;
//		else cout << "Bad Choice" << endl;
//		cout << endl;
//	}
//	return 0;
//}
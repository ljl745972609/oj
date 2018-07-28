//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<math.h>
//using namespace std;
//
//int charToInt(char c) {
//	return c - 'A' + 1;
//}
//
//int main() {
//	int debug = 1;
//	if (debug) {
//		FILE *fin;
//		FILE *fout;
//		freopen_s(&fin, "D:/vs2015Project/oj/resource/1015.in", "r", stdin);
//		freopen_s(&fout, "D:/vs2015Project/oj/resource/1015.out", "w", stdout);
//	}
//	long target;
//	int v, w, x, y, z;
//	string n;
//
//	while (cin >> target >> n && target != 0 && n != "END") {
//		char result[5] = { 0 };
//		int size = n.size();
//		int flag = 0;
//		for (int i = 0; i < size; i++) {
//			v = charToInt(n.at(i));
//			for (int j = 0; j < size; j++) {
//				w = charToInt(n.at(j));
//				if (v == w) continue;
//				for (int k = 0; k < size; k++) {
//					x = charToInt(n.at(k));
//					if (v == x || w == x) continue;
//					for (int m = 0; m < size; m++) {
//						y = charToInt(n.at(m));
//						if (v == y || w == y || x == y) continue;
//						for (int t = 0; t < size; t++) {
//							z = charToInt(n.at(t));
//							if (v == z || w == z || x == z || y == z) continue;
//							long temp = v - pow(w, 2) + pow(x, 3) - pow(y, 4) + pow(z, 5);
//							if (temp == target) {
//								result[0] = n.at(i);
//								result[1] = n.at(j);
//								result[2] = n.at(k);
//								result[3] = n.at(m);
//								result[4] = n.at(t);
//								flag = 1;
//							}
//						}
//					}
//				}
//			}
//		}
//		if(flag){
//			for (int i = 0; i < 5; i++) {
//				cout << result[i];
//			}
//			cout << endl;
//		}
//		else {
//			cout <<"no solution"<< endl;
//		}
//	}
//	return 0;
//
//}
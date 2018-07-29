//#include<iostream>
//
//
//using namespace std;
//
//string input = "1034.in";
//string output = "1034.out";
//
//int main() {
//	//debug(input,output);
//	int rnd;
//	while (cin >> rnd && rnd != 0) {
//		int *value = new int[rnd];
//		int cnt = 0;		// 记录吹口哨次数
//		for (int i = 0; i < rnd; i++) {
//			cin >> value[i];
//		}
//		while (true) {
//			int flag = 1;
//			int temp = value[rnd-1] /2;
//			for (int i = rnd - 1; i >= 1; i--) {
//				value[i] = value[i - 1] / 2 + value[i] / 2;
//				value[i] = value[i] % 2 ? value[i] + 1 : value[i];
//			}
//			value[0] = value[0] / 2 + temp;
//			value[0] = value[0] % 2 ? value[0] + 1 : value[0];
//			cnt++;
//			for (int i = 0; i < rnd-1; i++) {
//				if (value[i] - value[i + 1] != 0) {
//					flag = 0;
//					break;
//				}
//			}
//			if (flag) {
//				cout << cnt << " " << value[0] << endl;
//				break;
//			}
//		}
//
//	}
//	return 0;
//}
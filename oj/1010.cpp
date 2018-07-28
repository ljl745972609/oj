//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//
//
//int main()
//{
//	int m, n,t;
//	int x, y;
//	char mess[7][7];
//	FILE * fin;
//	FILE * fout;
//	freopen_s(&fin, "D:/vs2015Project/oj/resource/1010.in", "r", stdin);
//	while (cin >> m >> n >> t && m != 0 && n != 0 && t != 0) {
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> mess[i][j];
//				if (mess[i][j] == 'D') {
//					x = i; y = j;
//				}
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cout << mess[i][j];
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//
//}
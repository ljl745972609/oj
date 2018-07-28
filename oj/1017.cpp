//#include<iostream>
//
//
//
//using namespace std;
//int main()
//{
//
//	int T;
//	cin >> T;
//	while (T--) {
//		int n, m;
//		int temp = 1;
//		while (cin >> n >> m && n !=0){
//			int cnt = 0;
//			for (int i = 1; i < 100; ++i) {
//				for (int j = i + 1; j < n; ++j) {
//					if ((i*i + j * j + m) % (i*j) == 0) {
//						cnt++;
//					}
//				}
//			}
//			cout << "Case " << temp << ": " << cnt << endl;
//			temp++;
//		}
//		if (T) {
//			cout << endl;
//		}
//	}
//	return 0;
//}

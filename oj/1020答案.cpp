//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	int debug = 0;
//	if (debug) {
//		FILE *fin;
//		FILE *fout;
//		freopen_s(&fin, "D:/vs2015Project/oj/resource/1020.in", "r", stdin);
//		freopen_s(&fout, "D:/vs2015Project/oj/resource/1020.out", "w", stdout);
//	}
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		char s[10000] = { 0 };
//		cin >> s;
//
//		int size = strlen(s);
//		int count = 1;
//		char current = s[0];
//		int j = 1;
//		while (j < size) {
//			if (current != s[j]) {
//				if (count == 1) {
//					cout << current;
//				}
//				else {
//					cout << count << current;
//				}
//				count = 1;
//				current = s[j];
//			}
//			else {
//				count++;
//			}
//			if (j == (size - 1)) {
//				if ((current == s[j]))
//				{
//					if (count == 1){
//						cout << current;
//						
//					}
//					else {
//						cout << count << current;
//					}
//				}
//		
//			}
//			j++;
//		}
//		cout << endl;
//	}
//	return 0;
//}
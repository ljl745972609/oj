//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//
//int main() {
//	int length, v, w, x, y, z;
//	double a[20], target;
//	string s, maxs, tmp;
//
//	//int debug = 1;
//	//if (debug) {
//	//	FILE *fin;
//	//	FILE *fout;
//	//	freopen_s(&fin, "D:/vs2015Project/oj/resource/1015.in", "r", stdin);
//	//	freopen_s(&fout, "D:/vs2015Project/oj/resource/1015.out", "w", stdout);
//	//}
//
//	while (cin >> target >> s) {
//		if (target == 0 && s == "END")
//			break;
//		length = s.length();
//
//		for (v = 0; v<length; v++)
//			a[v] = (double)(s[v] - 64);
//
//		maxs = "AAAAA";
//		for (v = 0; v<length; v++)
//			for (w = 0; w<length; w++)
//				for (x = 0; x<length; x++)
//					for (y = 0; y<length; y++)
//						for (z = 0; z<length; z++)
//							if (a[v] - pow(a[w], 2.0) + pow(a[x], 3.0) - pow(a[y], 4.0) + pow(a[z], 5.0) == target && v != w && v != x && v != y && v != z && w != x && w != y && w != z && x != y && x != z && y != z) {
//								tmp.push_back(s[v]);
//								tmp.push_back(s[w]);
//								tmp.push_back(s[x]);
//								tmp.push_back(s[y]);
//								tmp.push_back(s[z]);
//								if (maxs<tmp)
//									maxs = tmp;
//								tmp.clear();
//							}
//		if (maxs == "AAAAA")
//			cout << "no solution" << endl;
//		else
//			cout << maxs << endl;
//
//	}
//	return 0;
//}
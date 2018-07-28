//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int debug = 0;
//	if (debug) {
//		FILE *fin;
//		FILE *fout;
//		freopen_s(&fin, "D:/vs2015Project/oj/resource/1029.in", "r", stdin);
//		freopen_s(&fout, "D:/vs2015Project/oj/resource/1029.out", "w", stdout);
//	}
//	int round;
//	while (cin >> round && round != EOF) {
//		int count = round / 2;
//		int *input = new int[count];
//		int *result = new int[count];
//		memset(input, 0, count);
//		memset(result, 0, count);
//		int temp = 0;		// 判断当前指针位置
//		int current;
//		int isEnd = 0;		// 判断是否结束
//		int position = 0;	// 记录输出数字的位置
//		for (int j = 0; j < round; j++) {
//			cin >> current;
//			int flag = 0;		// 判断是否有重复的
//			for (int i = 0; i < temp; i++) {
//				if (input[i] == current) {
//					result[i] += 1;
//					if (result[i] == (round+1)/2) {
//						isEnd = 1;
//						position = i;
//					}
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0) {
//				input[temp] = current;
//				result[temp] = 1;
//				temp++;
//			}
//			if (isEnd) {
//				cout << input[position] << endl;
//			}
//		}
//	}
//	return 0;
//}
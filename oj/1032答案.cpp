//
//#define DEBUG 0
//#if DEBUG == 1
//	#include"debug.h"
//	string fin = "1032.in", fout = "1032.out";
//	debug d = debug(fin, fout);
//#else
//	#include<iostream>
//#endif // DEBUG == 1
//
//using namespace std;
//
//int main()
//{
//	//d.isDebug(DEBUG);
//	int i, j;
//	while (cin>>i>>j)
//	{
//		cout << i << " " << j;
//		int max = 0, current;
//		
//		for (int m = (i>j?j:i); m <= (j>i?j:i); m++) {
//			current = m;
//			int temp = 0;
//			while (current != 1) {
//				if (current % 2 == 0) {
//					current = current / 2;
//				}
//				else {
//					current = 3 * current + 1;
//				}
//				temp++;
//			}
//			if (temp > max) max = temp;
//		}
//		cout << " " << max+1 << endl;
//	}
//	return 0;
//
//
//}
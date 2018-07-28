//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//double mult[10] = { 1.0,1.0 };
//double arr[10] = {1.0};
//void init(double a[], int n) {
//	for (int i = 2; i <= n; i++) {
//		mult[i] = mult[i - 1] * i;
//	}
//}
//
//void sum( int n) {
//	for (int i = 1; i <= n; i++) {
//		arr[i] = arr[i - 1] + (1.0 / mult[i]);
//	}
//}
//
//int main() {
//	init(mult, 9);
//	sum(9);
//	cout << "n " << "e" << endl;
//	cout << "- " <<"-----------" << endl;
//	for (int i = 0; i <= 9; i++) {
//		if (i == 0 || i == 1)
//			cout << i << ' ' << fixed << setprecision(0) << arr[i] << endl;
//		else if (i == 2)
//			cout << i << ' ' << fixed << setprecision(1) << arr[i] << endl;
//		else
//			cout << i << ' ' << fixed << setprecision(9) << arr[i] << endl;
//	}
//	return 0;
//
//}
//
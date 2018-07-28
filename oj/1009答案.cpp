//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//#include<iomanip>
//
//using namespace std;
//
//
//
//
//struct room {    //房间的结构体
//	int javabean;
//	int catfood;
//	double pro; //javabean与catfood的比值
//};
//
//
//bool compare(struct room r1, struct room r2) {    //按照pro即比例的降序排列
//	return r1.pro>r2.pro;
//}
//
//
//int main() {
//	int m, n;
//	double sum;
//	struct room r[1001];
//	//FILE * fin;
//	//FILE * fout;
//	//freopen_s(&fin,"D:/vs2015Project/oj/resource/1009.in", "r", stdin); //重定向输入流
//	//freopen_s(&fout,"D:/vs2015Project/oj/resource/1009.out", "w", stdout); //重定向输出流
//	while (cin >> m >> n && m != -1 && n != -1) { //输入的m，n只要不是-1就继续执行
//		sum = 0;
//		for (int i = 0; i<n; i++) {
//			cin >> r[i].javabean >> r[i].catfood;
//			if (r[i].catfood == 0)  r[i].pro = 10000;    //如果房间不需要catfood换取javabean，那么使其比例为10000.
//			else                          //否则比例是javabean/catfood
//				r[i].pro = 1.0*r[i].javabean / r[i].catfood;
//		}
//		sort(r, r + n, compare);   //把房间按照pro的大小排序
//
//
//		for (int j = 0; j<n; j++) {
//			if (m>r[j].catfood) {     //如果fatmouse有的catfood大于所需要，那么就可以兑换
//				sum += r[j].javabean;
//				m -= r[j].catfood;
//			}
//			else {       //否则，则按比例换取
//				sum += m * (1.0*r[j].javabean / r[j].catfood);
//				break;
//			}
//		}
//		cout << fixed << setprecision(3) << sum << endl;
//		//printf("%.3f\n",sum);   //保留三位小数
//
//	}
//
//	return 0;
//}
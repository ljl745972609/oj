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
//struct room {    //����Ľṹ��
//	int javabean;
//	int catfood;
//	double pro; //javabean��catfood�ı�ֵ
//};
//
//
//bool compare(struct room r1, struct room r2) {    //����pro�������Ľ�������
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
//	//freopen_s(&fin,"D:/vs2015Project/oj/resource/1009.in", "r", stdin); //�ض���������
//	//freopen_s(&fout,"D:/vs2015Project/oj/resource/1009.out", "w", stdout); //�ض��������
//	while (cin >> m >> n && m != -1 && n != -1) { //�����m��nֻҪ����-1�ͼ���ִ��
//		sum = 0;
//		for (int i = 0; i<n; i++) {
//			cin >> r[i].javabean >> r[i].catfood;
//			if (r[i].catfood == 0)  r[i].pro = 10000;    //������䲻��Ҫcatfood��ȡjavabean����ôʹ�����Ϊ10000.
//			else                          //���������javabean/catfood
//				r[i].pro = 1.0*r[i].javabean / r[i].catfood;
//		}
//		sort(r, r + n, compare);   //�ѷ��䰴��pro�Ĵ�С����
//
//
//		for (int j = 0; j<n; j++) {
//			if (m>r[j].catfood) {     //���fatmouse�е�catfood��������Ҫ����ô�Ϳ��Զһ�
//				sum += r[j].javabean;
//				m -= r[j].catfood;
//			}
//			else {       //�����򰴱�����ȡ
//				sum += m * (1.0*r[j].javabean / r[j].catfood);
//				break;
//			}
//		}
//		cout << fixed << setprecision(3) << sum << endl;
//		//printf("%.3f\n",sum);   //������λС��
//
//	}
//
//	return 0;
//}
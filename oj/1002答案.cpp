//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void) {
//	char a[1000], b[1000];
//	int a_int[1001], b_int[1001];
//	int t, a_len, b_len, max_len;
//	//t�ж�case����
//	cin >> t;
//	for (int i = 1; i <= t; i++) {
//		cin >> a >> b;
//		//������������ʵ�ʳ���
//		a_len = strlen(a);
//		b_len = strlen(b);
//
//		int tmp = 0;
//
//		//���ַ�����ֵ���������������,��������ֵĸ�λ����a_int[0]
//		for (int j = a_len - 1; j >= 0; j--)
//		{
//			a_int[tmp++] = a[j] - '0';
//
//		}
//
//		tmp = 0;
//		for (int k = b_len - 1; k >= 0; k--) {
//			b_int[tmp++] = b[k] - '0';
//		}
//
//		///����������0���ʹ��λ�����,���������λ�������λ����1��������ֻ�����λ��������Ϊ�˺�����㷽��
//		if (a_len>b_len)
//		{
//			for (int j = b_len; j <= a_len; j++) {
//				b_int[j] = 0;
//			}
//			a_int[a_len] = 0;
//
//		}
//		else if (a_len<b_len) {
//
//			for (int j = a_len; j <= b_len; j++)
//			{
//				a_int[j] = 0;
//			}
//			b_int[b_len] = 0;
//
//		}
//		else {//������λ��һ��ʱ��������1λ����λ
//			a_int[a_len] = 0;
//			b_int[b_len] = 0;
//		}
//		//��ͣ���󱣴浽a_int����
//		max_len = (a_len >= b_len) ? a_len : b_len;
//		for (int j = 0; j <= max_len; j++) {
//			a_int[j] += b_int[j];
//			if (a_int[j] >= 10)
//			{
//				a_int[j] -= 10;
//				a_int[j + 1] += 1;
//			}
//		}
//
//		cout << "Case " << i << ":" << endl;
//		cout << a << " " << "+" << " " << b << " " << "=" << " ";
//		//�ж����λ�Ƿ��н�λ���о����
//		if (a_int[max_len] == 0) {
//			for (int j = max_len - 1; j >= 0; j--)
//				cout << a_int[j];
//		}
//		else {
//			for (int j = max_len; j >= 0; j--)
//				cout << a_int[j];
//		}
//
//		if (i != t)
//			cout << endl << endl;
//		else
//			cout << endl;
//
//	}
//	return 0;
//}#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void) {
//	char a[1000], b[1000];
//	int a_int[1001], b_int[1001];
//	int t, a_len, b_len, max_len;
//	//t�ж�case����
//	cin >> t;
//	for (int i = 1; i <= t; i++) {
//		cin >> a >> b;
//		//������������ʵ�ʳ���
//		a_len = strlen(a);
//		b_len = strlen(b);
//
//		int tmp = 0;
//
//		//���ַ�����ֵ���������������,��������ֵĸ�λ����a_int[0]
//		for (int j = a_len - 1; j >= 0; j--)
//		{
//			a_int[tmp++] = a[j] - '0';
//
//		}
//
//		tmp = 0;
//		for (int k = b_len - 1; k >= 0; k--) {
//			b_int[tmp++] = b[k] - '0';
//		}
//
//		///����������0���ʹ��λ�����,���������λ�������λ����1��������ֻ�����λ��������Ϊ�˺�����㷽��
//		if (a_len>b_len)
//		{
//			for (int j = b_len; j <= a_len; j++) {
//				b_int[j] = 0;
//			}
//			a_int[a_len] = 0;
//
//		}
//		else if (a_len<b_len) {
//
//			for (int j = a_len; j <= b_len; j++)
//			{
//				a_int[j] = 0;
//			}
//			b_int[b_len] = 0;
//
//		}
//		else {//������λ��һ��ʱ��������1λ����λ
//			a_int[a_len] = 0;
//			b_int[b_len] = 0;
//		}
//		//��ͣ���󱣴浽a_int����
//		max_len = (a_len >= b_len) ? a_len : b_len;
//		for (int j = 0; j <= max_len; j++) {
//			a_int[j] += b_int[j];
//			if (a_int[j] >= 10)
//			{
//				a_int[j] -= 10;
//				a_int[j + 1] += 1;
//			}
//		}
//
//		cout << "Case " << i << ":" << endl;
//		cout << a << " " << "+" << " " << b << " " << "=" << " ";
//		//�ж����λ�Ƿ��н�λ���о����
//		if (a_int[max_len] == 0) {
//			for (int j = max_len - 1; j >= 0; j--)
//				cout << a_int[j];
//		}
//		else {
//			for (int j = max_len; j >= 0; j--)
//				cout << a_int[j];
//		}
//
//		if (i != t)
//			cout << endl << endl;
//		else
//			cout << endl;
//
//	}
//	return 0;
//}
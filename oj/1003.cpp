//#include<iostream>
//
//using namespace std;
//void maxSum(int a[], int size)
//{
//	int max = a[0], sum = 0, begin = 1, end = 1,temp = 1;
//	for (int i = 0; i < size; i++)
//	{
//		sum += a[i];
//		if (sum > max)
//		{
//			max = sum;
//			end = i + 1;
//			begin = temp;
//
//		}
//		if (sum < 0) {
//			sum = 0;
//			temp = i + 2;
//		}
//	}
//	cout << max << " " << begin << " " << end << endl;
//
//}
//int main()
//{
//	int size = 0;
//	cin >> size;
//	for (int i = 1; i <= size; i++)
//	{
//		int count = 0;
//		cin >> count;
//		int *arr = new int[count] {0};
//		for (int j = 0; j < count; j++)
//		{
//			cin >> arr[j];
//		}
//		cout << "case " << i << ": " << endl;
//		maxSum(arr, count);
//		if(i!=size)
//			cout << endl;
//	}
//	return 0;
//}
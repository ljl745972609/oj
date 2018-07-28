#include<iostream>
#include<cmath>
using namespace std;

double getAnswer(int n) {
	double answer = 0;
	for (int i = 1; i <= n; i++) {
		answer += log10((double)i);
	}
	return answer;
}


int main()
{
	//debug(input, output);
	int N;
	cin >> N;
	while (N--) {
		int temp;
		cin >> temp;
		cout << (int)getAnswer(temp) + 1 << endl;
	}
	return 0;
}
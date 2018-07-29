#include<iostream>
#include<string>
using namespace std;
#define DEBUG 1
//#include"function.h"
string input = "1039.in";
string output = "1039.out";

int check(string &s) {
	string vowels = "aeiou";
	int len = s.length();

	// 判断是否包含一个元音
	if (s.find('a') == -1 && s.find('e') == -1 && s.find('i') == -1 && s.find('o') == -1 && s.find('u') == -1) {
		return -1;
	}

	int cnt_v = 0;			// 相连的元音字母个数
	int cnt_c = 0;			// 相连的辅音字母个数
	char current;			//当前的字符
	for (int i = 0; i < len; i++) {
		current = s.at(i);
		if (i < len - 1) {
			if (current == s.at(i + 1) && (current != 'e' && current != 'o')) {
				return -1;
			}
		}
		if (vowels.find(current) != -1) {
			cnt_v++;
			cnt_c = 0;
		}
		else {
			cnt_v = 0;
			cnt_c++;
		}
		if (cnt_c >= 3 || cnt_v >= 3) {
			return -1;
		}
	
	}
	return 0;
}

int main()
{
	//debug(input, output);
	string temp;
	while (cin >> temp && temp != "end") {
		if (check(temp) == 0) {
			cout << "<" << temp << "> is acceptable." << endl;
		}
		else {
			cout << "<" << temp << "> is not acceptable." << endl;
		}
	}
	return 0;
	
}

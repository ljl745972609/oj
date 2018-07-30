//#include<iostream>
//#include<string>
//
//using namespace std;
//int charToInt(char c) {
//	return c - 'A';
//}
//int main() {
//	string s = "VWXYZABCDEFGHIJKLMNOPQRSTU";
//	string value;
//	while ( getline(cin,value) && value != "ENDOFINPUT") {
//		if (value == "START" || value == "END") {
//			continue;
//		}
//		int len = value.length();
//		for (int i = 0; i < len; i++) {
//			int temp = charToInt(value.at(i));
//			if (value.at(i) >= 'A'&&value.at(i) <= 'Z') {
//				value.at(i) = s.at(temp);
//			}
//		}
//		cout << value << endl;
//	}
//	return 0;
//}
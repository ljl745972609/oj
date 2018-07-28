#define DEBUG 1
#include "function.h"

void debug(string & input,string &output)
{
	string PATH = "D:/vs2015Project/oj/resource/";
	FILE *fin;
	FILE *fout;
	string finName = PATH + input;
	string foutName = PATH + output;
	freopen_s(&fin, finName.c_str(), "r", stdin);
	freopen_s(&fout, foutName.c_str(), "w", stdout);
}

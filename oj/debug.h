#include<string>
#include<iostream>
using namespace std;
class debug
{
public:
	debug();
	debug(string &input, string &output);
	~debug();
	void setInput(string &input);
	void setOutput(string &output);
	string getInput();
	string getOutput();
	void isDebug(bool isDebug);

private:
	string PATH = "D:/vs2015Project/oj/resource/";
	string input;
	string output;

};

debug::debug()
{
}

debug::~debug()
{
}

debug::debug(string &input, string &output) {
	this->input = input;
	this->output = output;
}
void debug::setInput(string &input) {
	this->input = input;
}

string debug::getInput() {
	return this->input;
}

void debug::setOutput(string &output) {
	this->output = output;
}

string debug::getOutput() {
	return this->output;
}
void debug::isDebug(bool isDebug) {
	if (isDebug) {
		FILE *fin;
		FILE *fout;
		string finName = PATH + input;
		string foutName = PATH + output;
		freopen_s(&fin, finName.c_str(), "r", stdin);
		freopen_s(&fout, foutName.c_str(), "w", stdout);
	}
}


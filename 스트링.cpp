#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{	
	string s;
	s = "Hello World1";
	string s2 = "Hello World2";
	string s3{ "Hello World3" };
	string s5 = "abc";
	string s6 = "def";

	string s4 = s + s2; //결합연산자

	cout << s[0] << endl;

	if (s == s2) {
		cout << "두 문자열이 동일합니다." << endl;
	}
	else {
		cout << "두 문자열이 다릅니다." << endl;
	}

	if (s5 < s6) {
		cout << "s5가 s6보다 앞에 있습니다."<< endl;
	}
	else {
		cout << "s6이 s5보다 앞에 있습니다." << endl;
	}

	string s7 = "B100";

	char c = s7[0];

	if (c == 'A') {
		cout << "기획부" << endl;
	}
	else if (c == 'B') {
		cout << "총무부" << endl;
	}
	else {
		cout << "인사부" << endl;
	}
	return 0;
}

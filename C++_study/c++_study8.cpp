#include <iostream>
#include <bitset>
#include <string>
#include "main.h"

using namespace std;


void func8_10() {
	
	//문자의 배열 <- 크기가 고정됨.
	char c[] = "문자열";

	// string
	string c1 = "문자열";
	string c2("문자열");
	string c3(5, '!');

	cout << c << endl <<c3;
}

void func8_11() {
	string s1;
	string s2;
	cin >> s1 >> s2;
	cout << s1 << " " << s2;
}

void func8_12() {
	string s3;

	// 띄어쓰기를 포함할 수 있다.
	getline(cin, s3);
	cout << s3;
}

void func8_13() {
	string s4="hello ";
	string s5="world";
	cout << (s4 > s5);  // 사전 순 -> 길이 순
}

void func8_14() {
	string s6 = "world";

	// 인덱스 초과시 차이가 있음
	cout << s6.at(3) << endl;
	cout << s6[3] << endl;

	cout << s6.front() << endl;
	cout << s6.back() << endl;

	cout << s6.size() << endl;


	cout << s6.append(" hello") << endl;
	cout << s6.insert(3," hello") << endl;
	cout << s6.replace(2,1," fff") << endl;


	cout << s6.substr(3) << endl;
}

void func8_15() {
	// 실습1
	//string s = R"(Police say two people are suspected of trying to create a shortcut for their construction work.
 //                 The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old 
 //                 woman were working near the affected area, the 32nd Great Wall.)";
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work. The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old woman were working near the affected area, the 32nd Great Wall.";

	cout << s.size() << endl;
	cout << s[99] << endl;
	cout << s.find("two") << endl;
	cout << s.find("two", s.find("two")+1 )<< endl;
}


void func8_16() {
	// 실습2
	string a, b;
	bool c, d;

	do {
		cout << "첫번째 숫자 입력";
		cin >> a;
		c = true;
		for (char i1 : a) {
			c = isdigit(i1);
			if (c == false) break;
		}
	} while (c == false);

	do {
		cout << "두번째 숫자 입력";
		cin >> b;
		d = true;
		for (char i1 : b) {
			d = isdigit(i1);
			if (d == false) break;
		}
	} while (d == false);

	cout << a + b << endl;
	cout << stoi(a) + stoi(b) << endl;
}

void func8() {
	string s = "Codingon";
	s[0] = tolower(s[0]);
	cout << s << endl;

	cout<<s.substr(2, 4)<<endl;
	cout<<s.replace(2, 4,"oooo") << endl;
	cout<<s.erase(1, 5) << endl;
}


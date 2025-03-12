#include <iostream>
#include <bitset>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
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

void func8_17() {
	string s = "Codingon";
	s[0] = tolower(s[0]);
	cout << s << endl;

	cout<<s.substr(2, 4)<<endl;
	cout<<s.replace(2, 4,"oooo") << endl;
	cout<<s.erase(1, 5) << endl;
}

void func8_18() {
	vector<int> vec = { 1,2,3 };  // 선언방법 1
	vector<int> vec2(5, 10);  // 선언방법 2(10을 5개 넣는다.)
	
	cout << vec[1] << endl;
	cout << vec.at(1) << endl;

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	for (int i = 0; i < vec.end()-vec.begin(); i++) {
		cout << vec[i] << endl;
	}

	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << endl;
	}

	// auto로 자료형을 추론
	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << endl;
	}
}

void func8_19() {
	vector<int> vec = { 1,2,3 };

	vec.push_back(7);  // 요소 추가
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	vec.pop_back();  // 요소 제거
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	vec.insert(vec.begin() + 2, 3);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	vec.erase(vec.begin() + 2);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}

void func8_20() {
	vector<int> vec = { 1,2,3,6,4,7,3,3,36,7,4,4,5,2,52,5,2,52,52,4 };

	sort(vec.begin(),vec.end());
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}


void func8_21() {
	// 2차원 선언
	vector<vector<int>> vec;
	vec = { {1,2,3},{4,5,6},{7,8,9} };
	
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}

	// 3차원 선언
	vector<vector<vector<int>>> vec2;
}

void func8_22() {
	
	// 1-1
	vector<int>	matrix;
	
	// 1-2
	matrix = { 1,2,3,4,5 };

	// 1-3
	cout << matrix.size() << endl;

	// 1-4
	cout << matrix.size() << endl;
	for (int i = 0; i < matrix.size(); i++) {
		cout << matrix[i] << endl;
	}

	// 1-5
	sort(matrix.begin(), matrix.end());
	cout << matrix.back() << endl;
	
	// 최대값 출력 함수(반복자를 출력)
	cout << *max_element(matrix.begin(), matrix.end()) << endl;

	// 1-6
	for (int i = 0; i < matrix.size(); i++) {
		matrix[i] *= 2;
		cout << matrix[i] << endl;
	}

	// 1-7
	int x;
	cout << "현재 입력 숫자: ";
	for (int i = 0; i < matrix.size(); i++) {
		cout << matrix[i] << " ";
	}
	cout << endl << "제거할 숫자: " << endl;

	cin >> x;

	vector<int>::iterator y = find(matrix.begin(), matrix.end(), x);
	
	matrix.erase(y);
	cout << "결과: ";
	for (int i = 0; i < matrix.size(); i++) {
		cout << matrix[i] << " ";
	}

	// 1-8
	cout << "현재 입력 숫자: ";
	for (int i = 0; i < matrix.size(); i++) {
		cout << matrix[i] << " ";
	}
	cout << endl << "입력할 숫자: " << endl;

	cin >> x;

	y = find(matrix.begin(), matrix.end(), x);

	matrix.insert(y, x);
	cout << "결과: ";
	for (int i = 0; i < matrix.size(); i++) {
		cout << matrix[i] << " ";
	}
}

void func8_23() {

	int a;
	int b;
	int c;

	cout << "숫자 2개 입력";
	cin >> a >> b;

	vector<vector<int>> vec(a,vector<int>(b));


	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			vec[i][j] = (i + 1) * (j + 1);
			cout << vec[i][j]<<" ";
		}
		cout << endl;
	}

	// 직접 입력 코드
	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		cin >> matrix[i][j];
	//	}
	//}

	cout << "각 행의 합: "<<endl;
	for (int i = 0; i < a; i++) {
		c = 0;
		for (int j = 0; j < b; j++) {
			c += vec[i][j];
		}
		cout << "행 " << (i + 1) << ": " << c << endl;
	}

	cout << "각 열의 합: " << endl;
	for (int i = 0; i < b; i++) {
		c = 0;
		for (int j = 0; j < a; j++) {
			c += vec[j][i];
		}
		cout << "열 " << (i + 1) << ": " << c << endl;
	}
}

void func8_24() {
	list<int> mylist = { 1,2,3,4,5,6 };
	
	// 앞과 뒤에 놓는 것이 더 연산이 빠르다.
	mylist.push_back(7);
	mylist.push_front(0);

	mylist.pop_back();
	mylist.pop_front();

	auto it = mylist.begin();
	
	advance(it, 2);
	mylist.insert(it, 5);

	advance(it, 1);
	mylist.erase(it);

	// 원소를 지정해서 지우기
	mylist.remove(2);
	mylist.remove_if([](int n) {return n & 2 == 0;});  // 조건부 삭제

	// list 병합
	list<int> list1 = { 1,2,3 };
	list<int> list2 = { 4,5,6 };
	list1.merge(list2);

	// 연속된 중복값 삭제
	list<int> list3 = { 1,1,2,2,2,2,1,3,4,2,4,5,5 };
	list3.unique();

	// list1의 특정자리에 list2 끼워넣기
	list1.splice(++list1.begin(), list2);

	for (auto it = mylist.begin(); it != mylist.end(); it++) {
		cout << *it << endl;
	}

	for (int num : mylist) {
		cout << num << " ";
	}
}

void func8_25() {
	// 1번
	list<int> mylist = { 5,4,3,4,2,1,1 };
	
	// 2번
	int a=0;
	for (int num : mylist) {
		if (num== 4) a += 1;
	}
	cout << a << endl;

	//3번
	mylist.sort();
	for (int num : mylist) {
		cout << num << " ";
	}
	cout << endl;

	// 4번
	mylist.unique();
	for (int num : mylist) {
		cout << num << " ";
	}
	cout << endl;

	// 5번
	mylist.push_back(6);
	mylist.push_back(7);
	for (int num : mylist) {
		cout << num << " ";
	}
	cout << endl;
	
	// 6번
	mylist.push_front(0);
	for (int num : mylist) {
		cout << num << " ";
	}
	cout << endl;

	// 7번
	mylist.remove_if([](int n) {return n<3 || n>6; });  // 조건부 삭제
	for (int num : mylist) {
		cout << num << " ";
	}
	cout << endl;
}








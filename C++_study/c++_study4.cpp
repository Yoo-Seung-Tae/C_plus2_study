#include <iostream>
using namespace std;

void func4_1(){
	for (int i = 0; i < 5; i+=2) {
		cout << i << "번" << endl;
	}
	
}
void func4_2(){
	cout << "값을 입력하세요.: ";
	int a;
	cin >> a;
	while (a>0) {
		cout << a << endl;
		a--;
	}

	// 한번은 무조건 출력
	do {
		cout << a << endl;
	} while (a > 0);
}

void func4_3() {
	// 실습 1
	int a;
	cout << "input: ";
	cin >> a;
	cout << "output: ";

	for (int i=0; i!=a+1; i++) {
		for (int j = 0; j != i; j++) {
			cout << '*' << ' ';  //공백도 출력 됨
		}
		cout << endl;
	}

	// 방법 2
	for (int i = 0; i <= a; i++) {
		cout << string(i, '*') << endl;
	}

	// 실습 1-2
	for (int i = 0; i <= a; i++) {
		cout << string(a-i, ' ') << string(i, '*') <<endl;
	}
}

void func4_4() {
	// 실습 2-1
	int a;
	cout << "input: ";
	cin >> a;
	cout << a <<"단 출력"<<endl;

	for (int i = 1; i <= 9; i++) {
		cout << a << '*' << i << '=' << a * i << endl;
	}
}

void func4_5() {
	// 실습 2-2
	cout << "1~9단 출력"<<endl;
	for (int i = 1; i <= 9; i++) {
		cout << "---" << i << "단" << "---" << endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << '*' << j << '=' << i * j << endl;
		}
	}
}

void func4_6() {
	// 실습 3
	cout << "1부터 n까지의 합 구하기" << endl << endl;
	cout << "숫자(양의 정수)를 입력하세요. : ";
	int a;
	cin >> a;

	int b = 0;
	for (int i = 0; i <= a; i++) {
		b += i;
	}
	cout << "1부터" << a << "까지의 합은 : "<<b;
}

void func4_7() {
	// 실습 4
	cout << "사용자가 입력한 숫자 더하기" << endl << endl;
	int a;
	int b=0;
	do {
		cout << "숫자를 입력하세요.(0: exit) : ";
		cin >> a;
		b += a;

		// if (a != 0) break;
		// 이렇게 한줄로 쓰면 {}를 안 쓸수도 있음.
		// 단, 가독성 문제가 있음.

	} while (a != 0);
	cout << "사용자가 입력한 수의 합은 : " << b;
}


void func4_8() {
	// 배열
	int arr[] = {1,2,3};

	cout << arr[1] << endl;
	arr[1] = 3;
	cout << arr[1] << endl;

	// 인덱싱
	int arr2[5] = {};

	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}

	// 이중 배열
	string arr3[2][2] = {
		{"aaa","bbb"},
		{"ccc","ddd"}
	};

	cout << arr3[0][0];

	// for-each문
	int arr4[] = { 1,2,3,4,5 };

	for (int i : arr4) {
		cout << i << " ";
	}
}

void func4_9() {
	// 실습 2
	string city2[5];
	for (int i = 0; i <= 4; i++) {
		cout << i <<"번째 도시 입력: ";
		cin >> city2[i];
	}

	for (string i : city2) {
		cout << i << endl;
	}
}

void func4_10() {
	// 실습 3
	int grade[5];
	float a=0;

	for (int i = 0; i <= 4; i++) {
		cout << i << "번 학생의 성적을 입력하세요.: ";
		cin >> grade[i];
		a += grade[i];
	}
	cout << "성적 평균 : " << a / 5;

	//cout << sizeof(grade)/4;
}
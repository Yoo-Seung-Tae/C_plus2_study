#include <iostream>
#include <bitset>
#include<stdio.h>
#include "main.h"

using namespace std;

void func3_1()
{
	// 실습1
	int age;
	cout << "나이를 입력하세요. ";
	cin >> age;
	if (age <= 7 && age >= 1) {
		cout << "유아" << endl;
	}
	else if (age <= 13 && age >= 8) {
		cout << "초등학생" << endl;
	}
	else if (age <= 16 && age >= 14) {
		cout << "중학생" << endl;
	}
	else if (age <= 19 && age >= 17) {
		cout << "고등학생" << endl;
	}
	else if (age >= 20 && age < 200) {
		cout << "성인" << endl;
	}
	if (age >= 200) {
		cout << "나이가 너무 많습니다." << endl;
	}

	// 실습2
	string name;
	cout << "이름를 입력하세요. ";
	cin >> name;
	if (name == "홍길동") {
		cout << "남자" << endl;
	}
	else if (name == "성춘향") {
		cout << "여자" << endl;
	}
	else {
		cout << "모르겠습니다." << endl;
	}

	// 실습3
	int num;
	cout << "숫자를 입력하세요. ";
	cin >> num;
	num % 5 == 0 ? printf(" %d는 5의 배수입니다.", num) : printf(" %d는 5의 배수가 아닙니다.", num);

	// 실습 4
	int numb1, numb2;
	char i;
	cout << "숫자를 입력하세요. ";
	cin >> numb1 >> numb2;
	cout << "연산자를 입력해주세요. (+ - * / %): ";
	cin >> i;
	switch (i) {
	case '+':
		cout << "****연산결과: " << numb1 + numb2 << endl;
		break;
	case '-':
		cout << "****연산결과: " << numb1 - numb2 << endl;
		break;
	case '*':
		cout << "****연산결과: " << numb1 * numb2 << endl;
		break;
	case '/':
		cout << "****연산결과: 몫:" << numb1 / numb2 << " 나머지:" << numb1 % numb2 << endl;
		break;
	case '%':
		cout << "****연산결과: " << numb1 % numb2 << endl;
		break;
	default:
		cout << "잘못 입력했습니다.";
	}
}


void func3_2() {
	// 1번 문제
	int num1 = 0b00010010;
	num1 |= (1 << 5);
	cout << "1번 답: " << bitset<8>(num1) << endl;

	// 2번 문제
	int num2 = 0b10101111;
	num2 & ~(1 << 2);

	cout << "2번 답: " << bitset<8>(num2) << endl;

	// 3번 문제
	int num3 = 0b11011010;
	num3 ^= (1 << 4);

	cout << "3번 답: " << bitset<8>(num3) << endl;

	// 4번 문제
	int num4;
	cout << "숫자 입력: ";
	cin >> num4;
	bool isSet = (num4 & (1 << 4));

	cout << "4번 답: " << isSet << endl;

	// 5번 문제
	int num5;
	cout << "숫자 입력: ";
	cin >> num5;
	bool isOdd = num5 & 1;

	cout << "5번 답: " << (isOdd ? "홀수" : "짝수") << endl;     //삼항연산자, 1일시(True) 홀수, 0일시(False) 짝수를 출력

	// 6번 문제
	int num6;
	cout << "숫자 입력: ";
	cin >> num6;
	bool isPowerOfTwo = num6 & (num6 - 1);

	cout << "6번 답: " << (isPowerOfTwo ? "No" : "Yes") << endl;



}

void func3_3() {
	// 스위치 문 예시
	int myInput;
	cin >> myInput;

	switch (myInput) {
	case 1:
		cout << "1" << endl;
		break;
	case 2:
		cout << "2" << endl;
		break;
	default:
		cout << "그 외" << endl;
	}
}

void func3_4() {
	// 7번 문제
	int num7;
	cout << "숫자 입력: ";
	cin >> num7;

	for (int i = sizeof(num7)*8-1; i >= 0; i--) {
		bool isSet = (num7 & (1 << i));

		if (isSet == 1) {
			cout << i;
			break;
		}
	}
}

void func3_5() {
	// 8번 문제
	int num8;
	cout << "숫자 입력: ";
	cin >> num8;
	int num8_2 = ~num8 + 1;
	int a = num8 & num8_2;

	//cout << bitset<8>(num8)<<endl;
	//cout << bitset<8>(num8_2) << endl;
	//cout << bitset<8>(a) << endl;

	int i = 0;
	bool b = false;
	while ('True') {
		b = (1 << i) & a;
		if (b == 1) {
			break;
		}
		i++;
	}

	cout << i;
}
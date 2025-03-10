#include <iostream>
#include <bitset>
using namespace std;
#include "main.h"

void func8_1() {
	// 할당
	int* i = new int(10);
	cout << *i << endl;

	// 해제
	delete i;
}

void func8_2() {
	int idx;
	cin >> idx;
	
	// 변수를 쓸 수 없음. 상수를 써야함
	// int iArr[idx] = {};
}

void func8_3() {
	int size;
	cout << "숫자 입력: ";
	cin >> size;

	// 배열의 값이 아닌 주소를 동적으로 지정
	int* iArr = new int[size];

	for (int i = 0; i < size; i++) {
		iArr[i] = (i + 1) * 10;
	}
	
	for (int i = 0; i < size; i++) {
		cout << "출력: " << iArr[i] << endl;
	}

	// 메모리 해제
	delete[] iArr;
}

void func8_4() {
	int a = 100;
	int* ptr = &a;
	int** dptr = &ptr;

	cout << "포인터 주소: " << ptr << endl;
	cout << "이중포인터 주소: " << dptr << endl;
	cout << "포인터 역참조: " << *dptr << endl;
	cout << "값 역참조: " << **dptr << endl;
}

void func8_5() {
	int row;
	int col;

	cout << "숫자 입력: ";
	cin >> row;
	cout << "숫자 입력: ";
	cin >> col;

	// 이중 포인터 생성
	int** matrix = new int*[row];

	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}

	// 값 넣기
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = i + j;
		}
	}
	
	// 값 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// 해제
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

void func8_6() {
	cout << "출력" << endl;

	// 아래와 같이 찍으면 함수의 주소가 나온다.
	cout << func8_5 << endl;

	
}

int add2(int a, int b) {
	return a + b;
}

void func8_7() {
	int (*funcPtr2)(int, int) = nullptr;
	funcPtr2 = add2;
	cout << funcPtr2(20, 10) << endl;
}

void callback() {
	cout << "콜백" << endl;
}

void func8_8(void (*callback)()) {
	cout << "콜백" << endl;
	callback();
}

int add8(int a, int b) {
	return a + b;
}
int sub8(int a, int b) {
	return a - b;
}
int mul8(int a, int b) {
	return a * b;
}
int div8(int a, int b) {
	if (b == 0) {
		cout << "0";
	}
	return a / b;
}


void func8_9() {
	int a, b;
	char op;

	int (*operation)(int, int) = nullptr;

	cout << "정수 두개를 입력하세요: ";
	cin >> a >> b;
	cout << "연산자를 입력하세요: (+, -, *, /) ";
	cin >> op;

	switch (op) {
		case '+':
			operation = add8;
			break;
		case '-':
			operation = sub8;
			break;
		case '*':
			operation = mul8;
			break;
		case '/':
			operation = div8;
			break;
		default:
			cout << "0" << endl;
	}

	int result = operation(a, b);
	cout << "결과: " << result;
}










#include <iostream>
#include <bitset>
using namespace std;
#include "main.h"

void func8_1() {
	// �Ҵ�
	int* i = new int(10);
	cout << *i << endl;

	// ����
	delete i;
}

void func8_2() {
	int idx;
	cin >> idx;
	
	// ������ �� �� ����. ����� �����
	// int iArr[idx] = {};
}

void func8_3() {
	int size;
	cout << "���� �Է�: ";
	cin >> size;

	// �迭�� ���� �ƴ� �ּҸ� �������� ����
	int* iArr = new int[size];

	for (int i = 0; i < size; i++) {
		iArr[i] = (i + 1) * 10;
	}
	
	for (int i = 0; i < size; i++) {
		cout << "���: " << iArr[i] << endl;
	}

	// �޸� ����
	delete[] iArr;
}

void func8_4() {
	int a = 100;
	int* ptr = &a;
	int** dptr = &ptr;

	cout << "������ �ּ�: " << ptr << endl;
	cout << "���������� �ּ�: " << dptr << endl;
	cout << "������ ������: " << *dptr << endl;
	cout << "�� ������: " << **dptr << endl;
}

void func8_5() {
	int row;
	int col;

	cout << "���� �Է�: ";
	cin >> row;
	cout << "���� �Է�: ";
	cin >> col;

	// ���� ������ ����
	int** matrix = new int*[row];

	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}

	// �� �ֱ�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = i + j;
		}
	}
	
	// �� ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// ����
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

void func8_6() {
	cout << "���" << endl;

	// �Ʒ��� ���� ������ �Լ��� �ּҰ� ���´�.
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
	cout << "�ݹ�" << endl;
}

void func8_8(void (*callback)()) {
	cout << "�ݹ�" << endl;
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

	cout << "���� �ΰ��� �Է��ϼ���: ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���: (+, -, *, /) ";
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
	cout << "���: " << result;
}










#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;
#include "main.h"


int func5_add(int a, int b) {
	return a + b;
}

int func5_sub(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}
}

int func5_mul(int a, int b) {
	return a * b;
}

double func5_divide(int a, int b) {
	if (b != 0) {
		return (double)a / b;
	}
	else {
		cout << "�Է� ����";
		return 0.0;
	}
}

void func5_2(int a) {
	if (a % 2 == 0) {
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
}

void func5_3(int a, int b, int c) {
	if (a > b && a > c) {
		cout << a << endl;
	}
	else if (b > a && b > c) {
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}

	//max �Լ��� 2�� �ʰ��� ��Ҹ� ���� �� ����.
	cout << max({ a, b, c });
}

// �Լ� �ҷ�����
int funcA(int x) {
	int localA = x + 1;
	cout << "function A " << localA << endl;
	return localA;
}

int funcB(int x) {
	int localB = x + 2;
	cout << "function B " << localB << endl;
	return funcA(localB);
}

void funcC() {
	int num = 5;
	num = funcB(num);
	cout << num << endl;
}

void recursive(int n) {
	if (n == 0) return;
		cout << "����Լ� ȣ��" << endl;
		recursive(n - 1);
}

int factorial_iteration(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}

int factorial_recursive(int n) {
	if (n == 1) return 1;
	return n * factorial_recursive(n - 1);
}

int double_mul(int a, int b) {
	if (b == 0) return 1;
	return a * double_mul(a,b-1);
}

int fibonacci_for(int a) {
	if (a == 0 || a == 1) {
		return 1;
	}
	int b[4] = { 0,1,1,0 };
	for (int i = 2; i <= a; i++) {
		b[3] = b[1] + b[2];
		b[0] = b[1];
		b[1] = b[2];
		b[2] = b[3];
	}
	return b[3];
}

int fibonacci_recu(int a) {
	if (a == 0 || a == 1) {
		return 1;
	}
	return fibonacci_recu(a - 2) + fibonacci_recu(a - 1);
}












#include <iostream>
#include <bitset>
#include<stdio.h>
#include "main.h"

using namespace std;

void func3_1()
{
	// �ǽ�1
	int age;
	cout << "���̸� �Է��ϼ���. ";
	cin >> age;
	if (age <= 7 && age >= 1) {
		cout << "����" << endl;
	}
	else if (age <= 13 && age >= 8) {
		cout << "�ʵ��л�" << endl;
	}
	else if (age <= 16 && age >= 14) {
		cout << "���л�" << endl;
	}
	else if (age <= 19 && age >= 17) {
		cout << "����л�" << endl;
	}
	else if (age >= 20 && age < 200) {
		cout << "����" << endl;
	}
	if (age >= 200) {
		cout << "���̰� �ʹ� �����ϴ�." << endl;
	}

	// �ǽ�2
	string name;
	cout << "�̸��� �Է��ϼ���. ";
	cin >> name;
	if (name == "ȫ�浿") {
		cout << "����" << endl;
	}
	else if (name == "������") {
		cout << "����" << endl;
	}
	else {
		cout << "�𸣰ڽ��ϴ�." << endl;
	}

	// �ǽ�3
	int num;
	cout << "���ڸ� �Է��ϼ���. ";
	cin >> num;
	num % 5 == 0 ? printf(" %d�� 5�� ����Դϴ�.", num) : printf(" %d�� 5�� ����� �ƴմϴ�.", num);

	// �ǽ� 4
	int numb1, numb2;
	char i;
	cout << "���ڸ� �Է��ϼ���. ";
	cin >> numb1 >> numb2;
	cout << "�����ڸ� �Է����ּ���. (+ - * / %): ";
	cin >> i;
	switch (i) {
	case '+':
		cout << "****������: " << numb1 + numb2 << endl;
		break;
	case '-':
		cout << "****������: " << numb1 - numb2 << endl;
		break;
	case '*':
		cout << "****������: " << numb1 * numb2 << endl;
		break;
	case '/':
		cout << "****������: ��:" << numb1 / numb2 << " ������:" << numb1 % numb2 << endl;
		break;
	case '%':
		cout << "****������: " << numb1 % numb2 << endl;
		break;
	default:
		cout << "�߸� �Է��߽��ϴ�.";
	}
}


void func3_2() {
	// 1�� ����
	int num1 = 0b00010010;
	num1 |= (1 << 5);
	cout << "1�� ��: " << bitset<8>(num1) << endl;

	// 2�� ����
	int num2 = 0b10101111;
	num2 & ~(1 << 2);

	cout << "2�� ��: " << bitset<8>(num2) << endl;

	// 3�� ����
	int num3 = 0b11011010;
	num3 ^= (1 << 4);

	cout << "3�� ��: " << bitset<8>(num3) << endl;

	// 4�� ����
	int num4;
	cout << "���� �Է�: ";
	cin >> num4;
	bool isSet = (num4 & (1 << 4));

	cout << "4�� ��: " << isSet << endl;

	// 5�� ����
	int num5;
	cout << "���� �Է�: ";
	cin >> num5;
	bool isOdd = num5 & 1;

	cout << "5�� ��: " << (isOdd ? "Ȧ��" : "¦��") << endl;     //���׿�����, 1�Ͻ�(True) Ȧ��, 0�Ͻ�(False) ¦���� ���

	// 6�� ����
	int num6;
	cout << "���� �Է�: ";
	cin >> num6;
	bool isPowerOfTwo = num6 & (num6 - 1);

	cout << "6�� ��: " << (isPowerOfTwo ? "No" : "Yes") << endl;



}

void func3_3() {
	// ����ġ �� ����
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
		cout << "�� ��" << endl;
	}
}

void func3_4() {
	// 7�� ����
	int num7;
	cout << "���� �Է�: ";
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
	// 8�� ����
	int num8;
	cout << "���� �Է�: ";
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
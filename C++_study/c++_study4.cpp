#include <iostream>
using namespace std;

void func4_1(){
	for (int i = 0; i < 5; i+=2) {
		cout << i << "��" << endl;
	}
	
}
void func4_2(){
	cout << "���� �Է��ϼ���.: ";
	int a;
	cin >> a;
	while (a>0) {
		cout << a << endl;
		a--;
	}

	// �ѹ��� ������ ���
	do {
		cout << a << endl;
	} while (a > 0);
}

void func4_3() {
	// �ǽ� 1
	int a;
	cout << "input: ";
	cin >> a;
	cout << "output: ";

	for (int i=0; i!=a+1; i++) {
		for (int j = 0; j != i; j++) {
			cout << '*' << ' ';  //���鵵 ��� ��
		}
		cout << endl;
	}

	// ��� 2
	for (int i = 0; i <= a; i++) {
		cout << string(i, '*') << endl;
	}

	// �ǽ� 1-2
	for (int i = 0; i <= a; i++) {
		cout << string(a-i, ' ') << string(i, '*') <<endl;
	}
}

void func4_4() {
	// �ǽ� 2-1
	int a;
	cout << "input: ";
	cin >> a;
	cout << a <<"�� ���"<<endl;

	for (int i = 1; i <= 9; i++) {
		cout << a << '*' << i << '=' << a * i << endl;
	}
}

void func4_5() {
	// �ǽ� 2-2
	cout << "1~9�� ���"<<endl;
	for (int i = 1; i <= 9; i++) {
		cout << "---" << i << "��" << "---" << endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << '*' << j << '=' << i * j << endl;
		}
	}
}

void func4_6() {
	// �ǽ� 3
	cout << "1���� n������ �� ���ϱ�" << endl << endl;
	cout << "����(���� ����)�� �Է��ϼ���. : ";
	int a;
	cin >> a;

	int b = 0;
	for (int i = 0; i <= a; i++) {
		b += i;
	}
	cout << "1����" << a << "������ ���� : "<<b;
}

void func4_7() {
	// �ǽ� 4
	cout << "����ڰ� �Է��� ���� ���ϱ�" << endl << endl;
	int a;
	int b=0;
	do {
		cout << "���ڸ� �Է��ϼ���.(0: exit) : ";
		cin >> a;
		b += a;

		// if (a != 0) break;
		// �̷��� ���ٷ� ���� {}�� �� ������ ����.
		// ��, ������ ������ ����.

	} while (a != 0);
	cout << "����ڰ� �Է��� ���� ���� : " << b;
}


void func4_8() {
	// �迭
	int arr[] = {1,2,3};

	cout << arr[1] << endl;
	arr[1] = 3;
	cout << arr[1] << endl;

	// �ε���
	int arr2[5] = {};

	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}

	// ���� �迭
	string arr3[2][2] = {
		{"aaa","bbb"},
		{"ccc","ddd"}
	};

	cout << arr3[0][0];

	// for-each��
	int arr4[] = { 1,2,3,4,5 };

	for (int i : arr4) {
		cout << i << " ";
	}
}

void func4_9() {
	// �ǽ� 2
	string city2[5];
	for (int i = 0; i <= 4; i++) {
		cout << i <<"��° ���� �Է�: ";
		cin >> city2[i];
	}

	for (string i : city2) {
		cout << i << endl;
	}
}

void func4_10() {
	// �ǽ� 3
	int grade[5];
	float a=0;

	for (int i = 0; i <= 4; i++) {
		cout << i << "�� �л��� ������ �Է��ϼ���.: ";
		cin >> grade[i];
		a += grade[i];
	}
	cout << "���� ��� : " << a / 5;

	//cout << sizeof(grade)/4;
}
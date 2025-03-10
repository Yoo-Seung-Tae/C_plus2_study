#include <iostream>
#include <bitset>
using namespace std;
#include "main.h"

void func7_1() {
	//������ ����
	int j = 0;
	cout << &j << endl;

	// �ּ� ���
	int i = 0;
	int* ptr = &i;  // ����: i�� �ּҸ� ����

	cout << ptr << endl;
	cout << ptr+1 << endl;  // 1�� ������ ��, 4��ŭ �ö�. int�� 4byte�̹Ƿ�
	cout << *ptr << endl;  // ������: �ּ� �տ� '*'�� ���̸� ����Ű�� �ִ� �ּ��� ���� ���

	// ������ �ٸ� Ÿ�� ������ �ֱ�
	float f = 3.14f;
	int* ptr2 = (int*)&f;
	cout << *ptr2 << endl;

	// ������ �ʱ�ȭ
	ptr2 = nullptr;

	// �迭�� ������
	int arr[4] = {10,20,30,40};

	cout << arr << endl;  // �迭�̸��� �迭�� ������ �޸��� �� ���ּҸ� ����Ŵ
	cout << arr + 1 << endl;  // 4byte��ŭ Ŀ��

	cout << sizeof(arr) << endl;  // int 4byte, 4�� = 16byte

	cout << *arr << endl;
	cout << *(arr+1) << endl;
}

void func7_2(){
	short i = 258;
	cout << bitset<16>(i);

	char cArr[4] = { 1,1,1,1 };
	short* ShortPtr = (short*)cArr;
	short sData = *(ShortPtr + 1);
	cout << (int)sData;
}

void func7_3() {
	const int a = 0;
	
	// �ȵ�
	// a = 100;

	int i = 100;
	int j = 200;


	// 1��
	const int* ptr = &i;
	
	// �ȵ�
	// *ptr = 200;
	ptr = &j;  // �̰� ��


	// 2��
	int* const ptr2 = &i;

	//ptr2 = &i;
	*ptr2 = j;  //�̰� ��


	// 3��
	const int* const ptr3 = &i;

	// �� �� �ȵ�
	//ptr3 = &j;
	//*ptr3 = j;
}

void coutconst(const int* x) {
	//*x = 200;
	int j = 0;
	x = &j;
	cout << "��� " << *x << endl;
}

void coutconst2(int* const x) {
	*x = 200;
	cout << "��� " << *x << endl;
}

void func7() {
	int i = 0;
	char j = 'a';
	short k = 10;
	double l = 3.14;

	
	void* ptr = nullptr;
	
	// � �ڷ����� ���� �� �ִ�.
	ptr = &i;
	//ptr = &j;
	//ptr = &k;
	//ptr = &l;
	cout << (int*)ptr << endl;
	cout << *((int*)ptr) << endl;
}
















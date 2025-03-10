#include <iostream>
#include <bitset>
using namespace std;
#include "main.h"

void func7_1() {
	//포인터 선언
	int j = 0;
	cout << &j << endl;

	// 주소 출력
	int i = 0;
	int* ptr = &i;  // 참조: i의 주소를 저장

	cout << ptr << endl;
	cout << ptr+1 << endl;  // 1을 더했을 때, 4만큼 올라감. int는 4byte이므로
	cout << *ptr << endl;  // 역참조: 주소 앞에 '*'을 붙이면 가리키고 있는 주소의 값을 출력

	// 강제로 다른 타입 데이터 넣기
	float f = 3.14f;
	int* ptr2 = (int*)&f;
	cout << *ptr2 << endl;

	// 포인터 초기화
	ptr2 = nullptr;

	// 배열의 포인터
	int arr[4] = {10,20,30,40};

	cout << arr << endl;  // 배열이름은 배열이 가지는 메모리의 맨 앞주소를 가리킴
	cout << arr + 1 << endl;  // 4byte만큼 커짐

	cout << sizeof(arr) << endl;  // int 4byte, 4개 = 16byte

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
	
	// 안됨
	// a = 100;

	int i = 100;
	int j = 200;


	// 1번
	const int* ptr = &i;
	
	// 안됨
	// *ptr = 200;
	ptr = &j;  // 이건 됨


	// 2번
	int* const ptr2 = &i;

	//ptr2 = &i;
	*ptr2 = j;  //이건 됨


	// 3번
	const int* const ptr3 = &i;

	// 둘 다 안됨
	//ptr3 = &j;
	//*ptr3 = j;
}

void coutconst(const int* x) {
	//*x = 200;
	int j = 0;
	x = &j;
	cout << "출력 " << *x << endl;
}

void coutconst2(int* const x) {
	*x = 200;
	cout << "출력 " << *x << endl;
}

void func7() {
	int i = 0;
	char j = 'a';
	short k = 10;
	double l = 3.14;

	
	void* ptr = nullptr;
	
	// 어떤 자료형도 넣을 수 있다.
	ptr = &i;
	//ptr = &j;
	//ptr = &k;
	//ptr = &l;
	cout << (int*)ptr << endl;
	cout << *((int*)ptr) << endl;
}
















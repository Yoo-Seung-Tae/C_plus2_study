#include <iostream>
using namespace std;
#include "main.h"

// 같은 변수 여러번 초기화 시 컴파일 에러
// 다른 파일에 중복 초기화 시 링크 에러 / 함수도 똑같음
int a = 0;
//int a = 0;

//int add(int a, int b);

int add(int a, int b) {
	return a + b;
}
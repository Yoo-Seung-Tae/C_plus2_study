#include <iostream>
using namespace std;
#include "main.h"


void func1_1()
{
    string a;
    string b;
    cout << "이름을 입력하세요.";
    cin >> a;
    cout << "나이를 입력하세요.";
    cin >> b;

    cout << "안녕하세요!" << b << "님(" << a << "세)";
}


void func1_2() {
    std::cout << "Function1_2 실행됨" << std::endl;
}
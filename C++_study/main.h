#pragma once
int func5_add(int a, int b);
int func5_sub(int a, int b);
int func5_mul(int a, int b);
double func5_divide(int a, int b);

void func5_2(int a);
void func5_3(int a, int b, int c);

int funcA(int x);
int funcB(int x);
void funcC();

void recursive(int n);
int factorial_iteration(int n);
int factorial_recursive(int n);
int double_mul(int a, int b);
int fibonacci_for(int a);
int fibonacci_recu(int a);

int add(int x, int y); // 예고 선언

void func7();
void coutconst(const int* x);
void coutconst2(int* const x);

extern int* ptr;

void func8_8(void (*callback)());
void callback();

void func11();
#include <iostream>
#include <bitset>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
#include "main.h"

using namespace std;


// 10_1
class Car {
public:
	string brand;
	int speed;

//private:
	void drive() {
		cout << brand << " " << speed << endl;
	}
};

// 10_2 ~ 4
class Person {
private:
	string name;
	int age;
public:

	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void setName(string name) {
		this->name = name;  // 이렇게도 쓸 수 있음.
	}
	void setAge(int a) {
		age = a;
	}
	void showInfo() {
		cout << name << " " << age << endl;
	}
};

// 10_5
class BankAccount {
private:
	int account;
	int balance;

public:

	BankAccount() {
		account = 333309;
		balance = 0;
	}
	void deposit(int amount) {
		balance += amount;
	}
	void withdraw(int amount) {
		balance -= amount;
	}
	~BankAccount() {
		cout << "계좌 삭제됨: [" << account << "]" << endl;
	}
};






void func10_1() {
	Car c1;
	c1.brand = "hyundai";
	c1.speed = 100;
	c1.drive();
}

void func10_2() {
	Person p1("Yoo", 30);
	p1.setName("yoo");
	p1.setAge(30);
	p1.showInfo();
}

void func10_3() {
	Person p2("Yoo", 30);
	p2.showInfo();
}	

void func10_4() {
	Person p1("Yoo", 30);

	p1.showInfo();

	Person p2 = p1;
	p2.setName("dd");
	p2.setAge(13);

	p2.showInfo();
}

void func10_5() {
	BankAccount dep1;
	cout << dep1.account << endl;
	cout << dep1.balance << endl;

	dep1.deposit(10000);
	dep1.withdraw(1000);

	cout << dep1.balance << endl;

}














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
public:
	int account;
	int balance;


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

// 10-6(10-3 실습1)
class Rectangle {
public:
	int width;
	int height;

	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}

	int getArea() {
		return width * height;
	}

	Rectangle* compareArea(Rectangle& other) {
		if (this->getArea() > other.getArea()) {
			return this;
		}
		else {
			return &other;
		}
	}

	void showinfo() {
		cout << "사각형의 넓이: " << getArea() << endl;
	}
};

// 10-7
class Counter {
private:
	static int count;
public:
	Counter() {
		count++;
	}

	static int getCount() {
		return count;
	}
};
int Counter::count = 0;

class User {
public:
	string id;
	string name;
	static int count;

	
	User(string id, string name) {
		this->id = id;
		this->name = name;
		count++;
	}
	static int getTotalUsers() {
		return count;
	}

	void showinfo() {
		cout << "회원 아이디 " << id << endl << "회원 이름 " << name << endl;
	}
};

int User::count = 0;

// 10-9
class car {
private:
	string brand;

public:
	void showBrand() const {
		cout << "브랜드는 " << brand << endl;
	}
	void setBrand(string brand) {
		this->brand = brand;
	}
};



void func10() {
	car c1;
	c1.setBrand("samsung");
	c1.showBrand();
}



void func10_8() {
	User u1("aaa", "111");
	User u2("bbb", "222");
	User u3("ccc", "333");

	u1.showinfo();
	u2.showinfo();
	u3.showinfo();

	cout << User::getTotalUsers();
}


void func10_7() {
	Counter c1, c2, c3;
	cout << Counter::getCount() << endl;
}


void func10_6() {
	Rectangle r1(10,20);
	Rectangle r2(20,30);

	Rectangle* larger = r1.compareArea(r2);
	larger->showinfo();

}


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














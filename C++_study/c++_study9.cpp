#include <iostream>
#include <bitset>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
#include "main.h"

using namespace std;

// 9_1
struct addr {
	string add;
	string ddd;
};

// ����ü ����
typedef struct Person {
	string name;
	string address;
	int age;
	addr a;

	void student() {
		cout << "�л�: "<< name << endl;
	}

}Myperson;  // Alias(��Ī)

// ��Ī ����
using PersonAlias = Person;


// 9_2
typedef struct Rectangle {
	int width;
	int height;

	int a() {
		return width * height;
	}
};


// 9_3
struct Point {
	int x;
	int y;
	
	// �Ʒ��� ���� �� ������ ���� ������ ����� �ͺ��� �����ϴ°� �� ����
	void add(const Point& other) {
		x += other.x;
		y += other.y;
	}
};


void func9_1() {
	Person p1;
	p1.name = "ddd";
	p1.age = 30;
	p1.address = "ddd";

	cout << p1.age << endl;
	cout << p1.name << endl;
	cout << p1.address << endl;

	p1.student();

	Person p2 = { "������","������",30,{"fef","efe"} };
	cout << p2.age << endl;
	cout << p2.name << endl;
	cout << p2.address << endl;
	cout << p2.a.add << endl;
	
	p2.student();
}

void func9_2() {
	Rectangle rec;

	cin >> rec.width >> rec.height;
	cout << endl << "����: " << rec.a() << endl;
}


void func9() {
	Point p1 = { 10,20 };
	Point p2 = { 30,40 };
	p1.add(p2);

	cout << p1.x << endl;
	cout << p1.y << endl;
}


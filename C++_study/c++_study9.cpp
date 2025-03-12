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

// 구조체 선언
typedef struct Person {
	string name;
	string address;
	int age;
	addr a;

	void student() {
		cout << "학생: "<< name << endl;
	}

}Myperson;  // Alias(별칭)

// 별칭 선언
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
	
	// 아래와 같이 한 이유는 새로 변수를 만드는 것보다 참조하는게 더 빨라서
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

	Person p2 = { "ㄷㄷㄷ","ㅇㅇㅇ",30,{"fef","efe"} };
	cout << p2.age << endl;
	cout << p2.name << endl;
	cout << p2.address << endl;
	cout << p2.a.add << endl;
	
	p2.student();
}

void func9_2() {
	Rectangle rec;

	cin >> rec.width >> rec.height;
	cout << endl << "넓이: " << rec.a() << endl;
}


void func9() {
	Point p1 = { 10,20 };
	Point p2 = { 30,40 };
	p1.add(p2);

	cout << p1.x << endl;
	cout << p1.y << endl;
}


#include <iostream>
#include <bitset>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
#include "main.h"

using namespace std;

// 11_1
class parent {
public:
	string family_name;
	string address;
	string asset;
	parent() {
		family_name = "yoo";
		cout << "부모 클래스 실행" << endl;
	}
	void eat() {
		cout << "처묵처묵" << endl;
	}
	~parent() {
		cout << "부모 클래스 종료" << endl;
	}
};

class child : public parent {
public:
	child() {
		cout << "자식 클래스 실행" << endl;
	}
	void showFamilyName() {
		cout << family_name << endl;
	}
	~child() {
		cout << "자식 클래스 종료" << endl;
	}
};

void func11_1() {
	child c1;
	c1.showFamilyName();
	c1.eat();
}


// 11_2
// 부모 클래스
class Shape {
public:
	int sides;
	int base;

	Shape(int s, int b) : sides(s), base(b) {}

	void printInfo() {
		cout << "변의 개수: " << sides << ", 밑변의 길이: " << base << endl;
	}
};

// 자식클래스(사각형)
class Rectangle1 : public Shape {
public:
	int length;

	Rectangle1(int b, int l) : Shape(4, b), length(l) {}

	void area() {
		cout << length << " " << base;
		cout << "사각형의 넓이는: " << base * length << endl;
	}
};

// 자식클래스(삼각형)
class Triangle : public Shape {
public:
	int height;

	Triangle(int b, int h) : Shape(3, b), height(h) {}

	void area() {
		cout << height << " " << base;
		cout << "삼각형의 넓이는: " << base * height * 0.5 << endl;
	}
};

void func11_2() {
	Triangle t1(10, 50);
	t1.printInfo();
	t1.area();

	cout << "----------------" << endl;

	Rectangle1 r1(10, 50);
	r1.printInfo();
	r1.area();
}

// 11-3
class a {
private:
	string privateval = "프라이빗";
protected:
	string protectval = "프로텍트";
public:
	string publicval = "퍼블릭";
};

class b : private a {
public:
	void showvalues() {
		cout << publicval;
		cout << protectval;

		// 접근 안됨
		//cout << privateval;
	}
};

void func11_3() {
	b b;
	b.showvalues();

	a a;
	// 접근 안됨
	//a.protectval;
}

class Vehicle {
protected:
	int speed;
public:
	string brand;
	void printinfo() {
		cout << "브랜드 이름: " << brand << endl;
		cout << "속도: " << speed << endl;
	}
};

class Car : public Vehicle {
private:
	int passenger;
public:
	void printinfo() {
		cout << "승객 수: " << passenger << endl;
	}
};

class Truck : public Vehicle {
private:
	int load;
public:
	void printinfo() {
		cout << "적재 용량: " << load << endl;
	}
};


int add1(int a, int b) {
	cout << "두개 더하기" << endl;
	return a + b;
}

// 오버로딩
int add1(int a, int b, int c) {
	cout << "세개 더하기" << endl;
	return a + b + c;
}

class shape {
public:
	void area(int a) {
		cout << "정사각형: ";
		cout << a * a<<endl;
	}
	void area(int a, int b) {
		cout << "직사각형: ";
		cout << a * b<<endl;
	}
	void area(double c) {
		cout << "원형: ";
		cout << c * c * 3.14159<<endl;
	}
};


void func11_4() {
	shape s1;
	s1.area(4, 5);
	s1.area(5);
	s1.area(4.0);
}

class weight {
public:
	int kg;

	weight(int k) : kg(k) {
	
	}

	weight* operator+(weight& other) {
		this->kg += other.kg;
		return this;
	}

	void show() {
		cout << kg << endl;
	}
};

void func11_5() {
	weight w1(60);
	weight w2(70);

	(w1 + w2)->show();
	(w2 + w1)->show();

	cout << w1.kg << endl;
	cout << w2.kg << endl;
}

class Point {
public:
	int x;
	int y;
	Point(int a, int b) :x(a), y(b) {}

	Point* operator+(Point& other) {
		this->x += other.x;
		this->y += other.y;
		return this;
	}

	void show() {
		cout << x << endl;
		cout << y << endl;
	}
};

void func11_6() {
	Point p1(1, 2);
	Point p2(2, 3);
	(p1 + p2)->show();
}

// 오버라이딩X, 함수 숨김 현상
class Para {
public:
	void show() {
		cout << "부모클래스"<<endl;
	}
};

class chil : public Para {
public:
	void show() {
		cout << "자녀클래스" << endl;
	}
};

void func11_7() {
	Para p1;
	chil c1;

	p1.show();
	c1.show();
}

class Animal {
public:

	// 순수 가상함수(추상 메소드): 상속받은 클래스에서 구현할 것을 강제함.
	// 추상메소드를 가진 클래스를 추상클래스라고 하며, 이것은 객체를 만들 수 없다.
	virtual void speak() = 0;
	virtual void move() = 0;
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "멍멍멍" << endl;
	}
	void move() override {
		cout << "다다다" << endl;
	}
};

class Dino : public Animal {
public:
	void speak() override {
		cout << "왈왈왈" << endl;
	}
	void move() override {
		cout << "다다다" << endl;
	}
};

void func11_8() {
	Animal* animal = nullptr;  // 틀을 나중에 가상으로 불러오기 위하여

	string choice;
	cin >> choice;

	if (choice == "강아지") {
		animal = new Dog;  // dog주소로 주소를 초기화
	}
	else {
		animal = new Dino;  // dino주소로 주소를 초기화
	}

	animal->speak();
	animal->move();
	delete animal;
}

class Vehicle1 {
public:
	virtual void accelerate() = 0;
	virtual void end() {
		cout << "폐차" << endl;
	}

	// 가상소멸자
	virtual ~Vehicle1() {}
};

class car : public Vehicle1 {
public:
	void accelerate() override {
		cout << 100 << "증가" << endl;
	}
};

class sportcar : public Vehicle1 {
public:
	void accelerate() override {
		cout << 200 << "증가" << endl;
	}
};

class truck : public Vehicle1 {
public:
	void accelerate() override {
		cout << 300 << "증가" << endl;
	}
};


void func11_9() {
	Vehicle1* vehicle = nullptr;
	int a;

	cout << "자동차 유형을 선택하세요.:" << endl;
	cout << "1. car (일반자동차)" << endl;
	cout << "2. sprotcar (스포츠카)" << endl;
	cout << "3. truck (트럭)" << endl;
	cin >> a;
	
	if (a == 1) {
		vehicle = new car;
	}
	else if (a == 2) {
		vehicle = new sportcar;
	}
	else if (a == 3) {
		vehicle = new truck;
	}
	else {
		cout << "입력오류";
	}

	vehicle->accelerate();
	vehicle->end();
	
	//delete vehicle;
}

class snack {
public:
	string productName;
	string company;
	int price;

	virtual void printInfo(string a, string b, int c, string d) = 0;
	virtual ~snack() {}
};

class Candy : public snack {
public:
	string taste;

	void printInfo(string a, string b, int c, string d) override {

		productName = a;
		company = b;
		price = c;
		taste = d;

		cout << "제품명" << productName << endl;
		cout << "회사명" << company << endl;
		cout << "가격" << price << endl;
		cout << "맛" << taste << endl;
	}
};

class Choco : public snack {
public:
	string shape;

	void printInfo(string a, string b, int c, string d) override {

		productName = a;
		company = b;
		price = c;
		shape = d;

		cout << "제품명" << productName << endl;
		cout << "회사명" << company << endl;
		cout << "가격" << price << endl;
		cout << "형태" << shape << endl;
	}
};

void func11_10() {
	snack* s1[] = { new Choco(),new Choco(), new Candy(), new Candy() };

	s1[0]->printInfo("가나", "가나", 1000, "사각형");
	s1[1]->printInfo("크런키", "롯데", 2000, "삼각형");
	s1[2]->printInfo("알사탕", "해태", 3000, "타원형");
	s1[3]->printInfo("청포도", "롯데", 4000, "원형");
}

class chatbot {
public:
	string message;

	virtual void respond(string message) = 0;
	virtual ~chatbot(){}
};
class customersupportbot : public chatbot {
public:
	void respond(string message) {
		cout << "고객 지원 문의를 처리합니다.: [" << message << "]" << endl;
	}
};
class weatherbot : public chatbot {
public:
	void respond(string message) {
		cout << "현재 날씨를 제공합니다.: [" << message << "]" << endl;
	}
};

void func11() {
	chatbot* c1 = new customersupportbot();
	chatbot* c2 = new weatherbot();

	int a = 1;
	string b;

	while (a != 0) {
		cout << "기능 선택" << endl;
		cout << "1. 고객지원" << endl;
		cout << "2. 날씨검색" << endl;
		cout << "0. 종료" << endl;
		cin >> a;
		cin.ignore();

		if (a == 1) {
			cout << "검색어 입력" << endl;
			cin >> b;
			cin.ignore();

			c1->respond(b);
			cout << endl;
		}
		if (a == 2) {
			cout << "검색어 입력" << endl;
			cin >> b;
			cin.ignore();

			c2->respond(b);
			cout << endl;
		}
	}

	// 캐스팅 형 변환
	// 업 캐스팅: 자녀클래스라는 자료형을 부모클래스로 바꿈
	// 다운 캐스팅: 업캐스팅 반대로

	// 부모클래스에 자식클래스 선언
	chatbot* chatbot1 = nullptr;
	chatbot1 = new weatherbot();

	// 다운캐스팅 실행 -> 부모클래스 것 못 씀
	weatherbot* weatherbot1 = (weatherbot*)chatbot1;
}












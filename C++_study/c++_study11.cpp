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
		cout << "�θ� Ŭ���� ����" << endl;
	}
	void eat() {
		cout << "ó��ó��" << endl;
	}
	~parent() {
		cout << "�θ� Ŭ���� ����" << endl;
	}
};

class child : public parent {
public:
	child() {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}
	void showFamilyName() {
		cout << family_name << endl;
	}
	~child() {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}
};

void func11_1() {
	child c1;
	c1.showFamilyName();
	c1.eat();
}


// 11_2
// �θ� Ŭ����
class Shape {
public:
	int sides;
	int base;

	Shape(int s, int b) : sides(s), base(b) {}

	void printInfo() {
		cout << "���� ����: " << sides << ", �غ��� ����: " << base << endl;
	}
};

// �ڽ�Ŭ����(�簢��)
class Rectangle1 : public Shape {
public:
	int length;

	Rectangle1(int b, int l) : Shape(4, b), length(l) {}

	void area() {
		cout << length << " " << base;
		cout << "�簢���� ���̴�: " << base * length << endl;
	}
};

// �ڽ�Ŭ����(�ﰢ��)
class Triangle : public Shape {
public:
	int height;

	Triangle(int b, int h) : Shape(3, b), height(h) {}

	void area() {
		cout << height << " " << base;
		cout << "�ﰢ���� ���̴�: " << base * height * 0.5 << endl;
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
	string privateval = "�����̺�";
protected:
	string protectval = "������Ʈ";
public:
	string publicval = "�ۺ�";
};

class b : private a {
public:
	void showvalues() {
		cout << publicval;
		cout << protectval;

		// ���� �ȵ�
		//cout << privateval;
	}
};

void func11_3() {
	b b;
	b.showvalues();

	a a;
	// ���� �ȵ�
	//a.protectval;
}

class Vehicle {
protected:
	int speed;
public:
	string brand;
	void printinfo() {
		cout << "�귣�� �̸�: " << brand << endl;
		cout << "�ӵ�: " << speed << endl;
	}
};

class Car : public Vehicle {
private:
	int passenger;
public:
	void printinfo() {
		cout << "�°� ��: " << passenger << endl;
	}
};

class Truck : public Vehicle {
private:
	int load;
public:
	void printinfo() {
		cout << "���� �뷮: " << load << endl;
	}
};


int add1(int a, int b) {
	cout << "�ΰ� ���ϱ�" << endl;
	return a + b;
}

// �����ε�
int add1(int a, int b, int c) {
	cout << "���� ���ϱ�" << endl;
	return a + b + c;
}

class shape {
public:
	void area(int a) {
		cout << "���簢��: ";
		cout << a * a<<endl;
	}
	void area(int a, int b) {
		cout << "���簢��: ";
		cout << a * b<<endl;
	}
	void area(double c) {
		cout << "����: ";
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

// �������̵�X, �Լ� ���� ����
class Para {
public:
	void show() {
		cout << "�θ�Ŭ����"<<endl;
	}
};

class chil : public Para {
public:
	void show() {
		cout << "�ڳ�Ŭ����" << endl;
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

	// ���� �����Լ�(�߻� �޼ҵ�): ��ӹ��� Ŭ�������� ������ ���� ������.
	// �߻�޼ҵ带 ���� Ŭ������ �߻�Ŭ������� �ϸ�, �̰��� ��ü�� ���� �� ����.
	virtual void speak() = 0;
	virtual void move() = 0;
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "�۸۸�" << endl;
	}
	void move() override {
		cout << "�ٴٴ�" << endl;
	}
};

class Dino : public Animal {
public:
	void speak() override {
		cout << "�пп�" << endl;
	}
	void move() override {
		cout << "�ٴٴ�" << endl;
	}
};

void func11_8() {
	Animal* animal = nullptr;  // Ʋ�� ���߿� �������� �ҷ����� ���Ͽ�

	string choice;
	cin >> choice;

	if (choice == "������") {
		animal = new Dog;  // dog�ּҷ� �ּҸ� �ʱ�ȭ
	}
	else {
		animal = new Dino;  // dino�ּҷ� �ּҸ� �ʱ�ȭ
	}

	animal->speak();
	animal->move();
	delete animal;
}

class Vehicle1 {
public:
	virtual void accelerate() = 0;
	virtual void end() {
		cout << "����" << endl;
	}

	// ����Ҹ���
	virtual ~Vehicle1() {}
};

class car : public Vehicle1 {
public:
	void accelerate() override {
		cout << 100 << "����" << endl;
	}
};

class sportcar : public Vehicle1 {
public:
	void accelerate() override {
		cout << 200 << "����" << endl;
	}
};

class truck : public Vehicle1 {
public:
	void accelerate() override {
		cout << 300 << "����" << endl;
	}
};


void func11_9() {
	Vehicle1* vehicle = nullptr;
	int a;

	cout << "�ڵ��� ������ �����ϼ���.:" << endl;
	cout << "1. car (�Ϲ��ڵ���)" << endl;
	cout << "2. sprotcar (������ī)" << endl;
	cout << "3. truck (Ʈ��)" << endl;
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
		cout << "�Է¿���";
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

		cout << "��ǰ��" << productName << endl;
		cout << "ȸ���" << company << endl;
		cout << "����" << price << endl;
		cout << "��" << taste << endl;
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

		cout << "��ǰ��" << productName << endl;
		cout << "ȸ���" << company << endl;
		cout << "����" << price << endl;
		cout << "����" << shape << endl;
	}
};

void func11_10() {
	snack* s1[] = { new Choco(),new Choco(), new Candy(), new Candy() };

	s1[0]->printInfo("����", "����", 1000, "�簢��");
	s1[1]->printInfo("ũ��Ű", "�Ե�", 2000, "�ﰢ��");
	s1[2]->printInfo("�˻���", "����", 3000, "Ÿ����");
	s1[3]->printInfo("û����", "�Ե�", 4000, "����");
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
		cout << "�� ���� ���Ǹ� ó���մϴ�.: [" << message << "]" << endl;
	}
};
class weatherbot : public chatbot {
public:
	void respond(string message) {
		cout << "���� ������ �����մϴ�.: [" << message << "]" << endl;
	}
};

void func11() {
	chatbot* c1 = new customersupportbot();
	chatbot* c2 = new weatherbot();

	int a = 1;
	string b;

	while (a != 0) {
		cout << "��� ����" << endl;
		cout << "1. ������" << endl;
		cout << "2. �����˻�" << endl;
		cout << "0. ����" << endl;
		cin >> a;
		cin.ignore();

		if (a == 1) {
			cout << "�˻��� �Է�" << endl;
			cin >> b;
			cin.ignore();

			c1->respond(b);
			cout << endl;
		}
		if (a == 2) {
			cout << "�˻��� �Է�" << endl;
			cin >> b;
			cin.ignore();

			c2->respond(b);
			cout << endl;
		}
	}

	// ĳ���� �� ��ȯ
	// �� ĳ����: �ڳ�Ŭ������� �ڷ����� �θ�Ŭ������ �ٲ�
	// �ٿ� ĳ����: ��ĳ���� �ݴ��

	// �θ�Ŭ������ �ڽ�Ŭ���� ����
	chatbot* chatbot1 = nullptr;
	chatbot1 = new weatherbot();

	// �ٿ�ĳ���� ���� -> �θ�Ŭ���� �� �� ��
	weatherbot* weatherbot1 = (weatherbot*)chatbot1;
}












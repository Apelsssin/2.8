#pragma once
#include "Figure.h"
class Triangle : public Figure {
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
public:
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->name = "Треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		sides = 3;
		if (sides != 3) throw Exceptions("количество сторон не равно 3!");
		if (A + B + C != 180) throw Exceptions("сумма углов не равна 180!");
	}
	Triangle() : Triangle(10, 20, 30, 50, 60, 70) { ; }
	std::string get_name() { return name; }
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	void print() override;
};
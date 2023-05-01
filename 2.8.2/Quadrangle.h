#pragma once
#include "Figure.h"
class Quadrangle : public Figure {
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	int d;
	int D;
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->name = "Четырехугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->sides = 4;
		if (sides != 4) throw Exceptions("количество сторон не равно 4!");
		if (A + B + C + D != 360) throw Exceptions("сумма углов не равна 360!");
	}
	Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80) { ; }
	std::string get_name();
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
	void print() override;
};
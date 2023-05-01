#pragma once
#include "isosceles_t.h"
class equilateral_t : public isosceles_t {
public:
	equilateral_t(int a) : isosceles_t(a, a, 60, 60) {
		if (this->a != b) throw Exceptions("стороны не равны друг другу!");
		if (A != B) throw Exceptions("углы не равны друг другу");
		if (A != 60) throw Exceptions("угол не равен 60");
		name = "–авносторонний треугольник";
	}
	equilateral_t() : equilateral_t(10) { ; }

};
#include "Triangle.h"

	int Triangle::get_a() { return a; }
	int Triangle::get_b() { return b; }
	int Triangle::get_c() { return c; }
	int Triangle::get_A() { return A; }
	int Triangle::get_B() { return B; }
	int Triangle::get_C() { return C; }
	void Triangle::print()  {
		std::cout << name << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << "; ���� " << get_A() << ", " << get_B() << ", " << get_C() << ") ������\n";
		std::cout << "\n\n";
	} 
#include <iostream>
#include "Quadrangle.h"
std::string Quadrangle::get_name() { return name; }
int Quadrangle::get_a() { return a; }
int Quadrangle::get_b() { return b; }
int Quadrangle::get_c() { return c; }
int Quadrangle::get_d() { return d; }
int Quadrangle::get_A() { return A; }
int Quadrangle::get_B() { return B; }
int Quadrangle::get_C() { return C; }
int Quadrangle::get_D() { return D; }

void Quadrangle::print() {
	std::cout << name << " (стороны " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d() << "; углы " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") создан\n";
	std::cout << "\n\n";
}
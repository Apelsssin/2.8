#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "parallelogram.h"
#include "Quadrangle.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"
#include "equilateral_t.h"
#include "isosceles_t.h"
#include "right_t.h"
#include "Exceptions.h"
void print(Figure* adress) {
	adress->print();
}
int main() {
	setlocale(LC_ALL, "Russian");
	try {
		Triangle tri;
		Triangle* tri_q = &tri;
		print(tri_q);
		right_t rig;//Ошибка
		Triangle* rig_q = &rig;
		print(rig_q);
		isosceles_t iso;//Ошибка
		Triangle* iso_q = &iso;
		print(iso_q);
		equilateral_t equ;
		Triangle* equ_q = &equ;
		print(equ_q);
		Quadrangle qua;//Ошибка
		Quadrangle* qua_q = &qua;
		print(qua_q);
		parallelogram par;//Ошибка
		Quadrangle* par_q = &par;
		print(par_q);
		rectangle rec;
		Quadrangle* rec_q = &rec;
		print(rec_q);
		square sq;
		Quadrangle* sq_q = &sq;
		print(sq_q);
		rhombus rho;//Ошибка
		Quadrangle* rho_q = &rho;
		print(rho_q);
	}
	catch (const Exceptions& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	catch (...) {
		std::cout << "Ошибка создания фигуры. Причина: неизвестна" << std::endl;
	}
}
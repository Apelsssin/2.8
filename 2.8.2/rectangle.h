#pragma once
#include <iostream>
#include "parallelogram.h"
class rectangle : public parallelogram {
public:
	rectangle() : rectangle(10, 20) { ; }
	rectangle(int a, int b) : parallelogram(a, b, 90, 90) {
		name = "Прямоугольник";
		if (this->A != 90) throw Exceptions("угол A не равен 90!");
		if (this->A != B) throw Exceptions("углы не равны друг другу");
	}
};
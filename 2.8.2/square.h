#pragma once
#include <iostream>
#include "rectangle.h"
class square : public rectangle {
public:

	square(int a) : rectangle(a, a) {
		name = " вадрат";
		if (this->a != b) throw Exceptions("стороны не равны друг другу!");
	}
	square() : square(10) { ; }
};
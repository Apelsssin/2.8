#pragma once
#include <iostream>
#include "Exceptions.h"
class Figure {
protected:
	std::string name;
	int sides;
public:
	int get_sides();
	std::string get_name();
	Figure() {
		name = "Фигура";
		sides = 0;
	}
	virtual void print();
};
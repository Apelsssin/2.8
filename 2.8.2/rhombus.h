#pragma once
#include <iostream>
#include "parallelogram.h"
class rhombus : public parallelogram {
public:
	rhombus(int a, int A, int B) : parallelogram(a, a, A, B) {
		name = "����";
		if (this->a != b) throw Exceptions("������� �� ����� ���� �����!");
	}
	rhombus() : rhombus(10, 60, 70) { ; }
};
#pragma once
#include "isosceles_t.h"
class equilateral_t : public isosceles_t {
public:
	equilateral_t(int a) : isosceles_t(a, a, 60, 60) {
		if (this->a != b) throw Exceptions("������� �� ����� ���� �����!");
		if (A != B) throw Exceptions("���� �� ����� ���� �����");
		if (A != 60) throw Exceptions("���� �� ����� 60");
		name = "�������������� �����������";
	}
	equilateral_t() : equilateral_t(10) { ; }

};
#pragma once
#include "Triangle.h"
class isosceles_t : public Triangle {
public:
	isosceles_t(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
		name = "�������������� �����������";
		if (a != c) throw Exceptions("������� �� ����� ���� �����!");
		if (A != C) throw Exceptions("���� �� ����� ���� �����");
	}
	isosceles_t() : isosceles_t(10, 20, 50, 60) { ; }
};
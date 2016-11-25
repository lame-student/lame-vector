#pragma once

#include "Vector.h"
class Vector;

class Matrix
{
	int row, col; // m * n
	float** data;
public:
	Matrix(int col, int row);
	~Matrix();
	Matrix operator*(const Matrix&);
	Matrix operator+(const Matrix&);
	Matrix operator-(const Matrix&);
	Vector operator*(const Vector&);
	float det(); // ������������
	Matrix reverse(); //��������
	Matrix transpose(); // �����������������

};
std::ostream& operator>>(std::ostream&, Matrix&);
std::istream& operator<<(std::istream&, Matrix&);

#pragma once

#include "Vector.h"
class Vector;
/*
	float*f = new float[1];
	float**pf=&f;

*/

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

ostream& operator>>(ostream&, Matrix&);
istream& operator<<(istream&, Matrix&);

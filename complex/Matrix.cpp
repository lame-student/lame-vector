#include "Matrix.h"

Matrix::Matrix(int col, int row) //col - ���������� ��������, row - ���������� �����
{
	this->col = col;
	this->row = row;
	data = new float*[row];
	for (int i = 0; i < row; i++)
	{
		data[i] = new float[col];
	} // data[y][x];
}

Matrix::~Matrix() //col - ���������� ��������, row - ���������� �����
{
	for (int i = 0; i < row; i++)
	{
		delete[] data[i];
	}
	delete[] data;	
}


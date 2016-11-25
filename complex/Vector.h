#pragma once //����������� ����� ���� ���
#include <iostream>
#include "Matrix.h"
using namespace std;
//https://github.com/lame-student/lame-vector
//������� �������� ������
//VCS
//������������� - git, hg, svn, csv
/* 
struct - �������� �����
Vector - ��� ������(���������)
float re; - ����
void setRe(float re); - ������
*/
class Matrix;
//class - ���� �� ��������� ��������� (private)
//struct - ���� �� ��������� ��������� (public)
class Vector { //�������
private:
	int dimension;//�����������
	float* data;
public:
	Vector(int dim, float def); //����������� (����������� / �������� �� ���������)
	~Vector(); // ���������� (�����, ������� ���������� ����� ��������� �������)
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector operator*(float other);
	float operator*(const Vector& other);
	int getDimension(); // �����, ������������ ����������� �������
	float& operator[](int); // �������� ������� � ������
	Matrix operator*(Matrix&);
};

Vector operator*(float re, Vector& c);

istream& operator>>(istream& is, Vector& c);
ostream& operator<<(ostream& os, Vector& c);


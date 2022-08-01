#ifndef Polynomial_h
#define Polynomial_h
#pragma once
#include <iostream>
using namespace std;

class Polynomial {
	int Degree;
	double* values;
	static unsigned int MaxDegree;
public:
	Polynomial(double* arr, int degree) {
		this->values = arr; 
		this->Degree = degree;
	}
	Polynomial(int degree = 0) {
		this->values = new double[degree];
		this->values = { 0 };
		this->Degree = degree;
		
	}
	//destructor
	static unsigned int getMaxDegree();
	double getDegree(bool) const ;
	double getCoeff(int) const ;
	void setCoeff(int, double);
	void setMaxDegree(int);
	void print();
};
#endif 

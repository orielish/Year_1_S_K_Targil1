#ifndef Polynomial_h
#define Polynomial_h
#pragma once
#include <iostream>
using namespace std;

class Polynomial {
	int Degree;
	double* values;
	int static MaxDegree;
public:
	Polynomial(double* arr, int degree) {
		this->values = arr; 
		this->Degree = degree;
		if (Degree > MaxDegree && this->values[this->Degree] != 0) {
			this->MaxDegree = this->Degree;
		}
	}
	Polynomial(int degree = 0) {
		this->values = new double[degree];
		for (int i = 0; i < degree; i++) {
			this->values[i] = 0;
		}
		this->Degree = degree;
		
	}
	static ` int getMaxDegree();
	double getDegree(bool) const ;
	double getCoeff(int) const ;
	void setCoeff(int, double);
	void print();
};
#endif 

#include "Polynomial.h"
#include <iostream>
using namespace std;

unsigned int Polynomial::getMaxDegree() {
	return MaxDegree;
}
double Polynomial::getDegree(bool what) const {
	int TempDegree = 0;
	if (what) {
		for (int i = 0; i < this->Degree; i++)
		{
			if (this->values[i] != 0)
			{
				TempDegree = i + 1;
			}
		}
		return TempDegree;
	}
	else {
		return this->Degree;
	}
}
double Polynomial::getCoeff(int index) const {
	return this->values[index];
}
void Polynomial::setCoeff(int degree, double value) {
	this->values[degree - 1] = value;
}
void Polynomial::print() {
	if (this->Degree > 0) {
		for (int i = 0; i < this->getDegree(true); i++) {
			cout << values[i] << "X^" + i;
			if (i != this->Degree - 1) {
				cout << "+";
			}
		}
		cout << endl;
	}
	else {
		cout << "0";
	}
}

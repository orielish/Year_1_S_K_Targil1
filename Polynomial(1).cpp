#include <iostream>
#include "Polynomial.h"
using namespace std;


  int Polynomial::MaxDegree = 0;

int Polynomial::getMaxDegree() {
	return MaxDegree;
}
Polynomial::Polynomial() {
	for (int i = 0;i < size;i++)
	{
		_a[i] = 0;
	}
	_degree = 0;
}
Polynomial::Polynomial(int d) {
	for (int i = 0;i < size;i++)
	{
		_a[i] = 0;
	}
	_degree = d;
	//MaxDegree = (MaxDegree > d) ? MaxDegree : d;
}
Polynomial::Polynomial(double* x , int d){
	int i;
	this->_degree = d;
	for (i = 0;i <= this->_degree +1;i++)
	{
		this->_a[i] = x[i];
	}
	for (i = d + 2;i < size;i++)
		this->_a[i] = 0;
	for (i = size - 1;i >= 0;i--) {
		if (_a[i] > 0) {
			if (i > MaxDegree) {
				MaxDegree = i;
				break;
			}
		}
	}
}
Polynomial::Polynomial(const Polynomial& p1) {
	for (int i = 0;i < size;i++)                      // load _a[i] from &p1 to new poly
		this->_a[i] = p1._a[i];
	this->_degree = p1._degree;
	MaxDegree = (MaxDegree > this->_degree) ? MaxDegree : this->_degree;
}

//Gets

int Polynomial::getDegree(bool flag) const {
	if (flag==false)
		return _degree;
	else {
		for (int i = _degree-1;i >= 0;i--) {
			if (_a[i] != 0)
				return i;
			else
				continue;
		}
	}
	return 0;
}

double Polynomial::getCoeff(int i) const {
	return _a[i];
}

//Sets
void Polynomial::setCoeff(int i, double num) {
	this->_a[i] = num;
}

void Polynomial:: print() const {
	cout << "Polynomial = " << _a[0];
	for (int i = 1;i <= this->getDegree(true)+1;i++)      // print all items on arr until last data is 0 (not include)
	{
		if (i != (this->getDegree(true) + 1))
			cout << " + " << _a[i] << "X^" << i;
		else
			if (_a[i])
			cout << " + " << _a[i] << "X^" << i;
		else continue;                                // last data is 0 - dont print
	}
	cout << endl;
}
//ostream& operator << (ostream& out , const Polynomial& p)  {
//	out << "polynomial = " << p.printP() << endl;
//	return out;
//}
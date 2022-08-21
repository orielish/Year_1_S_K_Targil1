#pragma once
class Polynomial
{
	
private:
	const static int size = 20;   // ���� ���� �������
	double _a[size];              // ���� �������
	int _degree;                  // ���� ������ ������� �����
	static int MaxDegree;         // Global highest Real Degree 


public:

	//constractures
	Polynomial();
	Polynomial(int);
	Polynomial(double[], int );
	Polynomial(const Polynomial& );
	void copyP(Polynomial&);

	//Gets
	int getDegree(bool) const;
	double getCoeff(int) const;
	static int getMaxDegree();

	//Sets
	void setCoeff(int, double);

	void print() const;
	//friend ostream& operator << (ostream& ,const Polynomial&);





};


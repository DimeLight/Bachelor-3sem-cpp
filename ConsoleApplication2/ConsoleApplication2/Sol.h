#pragma once
#include <vector>
struct Point
{
	double x, y;
};
class RS //ReadandStore
{
protected:
	std::vector <double> a, b, shag;
	RS();
	Point *mas;
public:
	RS(RS& A) { delete[] mas; this->a = A.a; this->b = A.b; this->shag = A.shag; delete &A; };
	~RS() {};
	RS operator=(RS& A) { this->a = A.a; this->b = A.b; this->shag = A.shag; };
};
class Sol : private RS
{
	int *n;
public:
	Sol();
	Sol(Sol& A) { for (int i = 0; i <= A.a.size(); i++) this->n[i] = A.n[i]; for (int j = 0; j < n[A.a.size()]; j++) this->mas[j] = A.mas[j]; this->a = A.a; this->b = A.b; this->shag = A.shag; delete &A; };
	~Sol() { delete[] n; };
	Sol operator=(Sol& A) { this->n = A.n; this->mas = A.mas; this->a = A.a; this->b = A.b; this->shag = A.shag; };
	friend class DateOut;
};
class DateOut
{
public:
	DateOut(Sol *A);
};
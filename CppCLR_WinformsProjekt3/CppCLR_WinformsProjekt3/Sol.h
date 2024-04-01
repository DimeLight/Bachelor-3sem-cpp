#pragma once
#include <cmath>
#include <set>
#include <vector>
class Pointxy
{
public:
	double x, y;
	Pointxy(double X = 0, double  Y = 0) :x(X), y(Y) {};
};
class RS
{
protected:
	virtual double Fy(double x) = 0;
	std::vector<std::set<double>>  x;
public:
	int numOfNaborov;
	virtual void inputabshag(System::Windows::Forms::RichTextBox ^ ai, System::Windows::Forms::RichTextBox ^ bi, System::Windows::Forms::RichTextBox ^ shagi);
	virtual std::vector<Pointxy> outputXY(int i);
};
class Sol : public RS
{
	double Fy(double x) { return sqrt(x / (4 * log(x))); };
public:
	Sol() {};
};


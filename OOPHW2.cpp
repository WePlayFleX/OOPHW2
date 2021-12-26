#include <iostream>
#include <cstring>

using namespace std;

class Geometry
{
public:
	Geometry();
	~Geometry();
	areaTriangle();

private:
	double* area;
	double* radius;
	double* diameter;
	double* semiPerimeter;
	double* a;
	double* b;
	double* c;
};

int main()
{
	Geometry obj;

	obj.areaTriangle();
	system("pause");
	return 0;
}
Geometry::Geometry()
{
	area = new double[1000];
	radius = new double[100];
	diameter = new double[100];
	semiPerimeter = new double[100];
	a = new double[100];
	b = new double[100];
	c = new double[100];
}

Geometry::~Geometry()
{
	delete[] area;
	delete[] radius;
	delete[] diameter;
	delete[] semiPerimeter;
	delete[] a;
	delete[] b;
	delete[] c;
}

double Geometry::areaTriangle()
{
	cout << "Area of a triangle on three sides! " << endl;
	cout << "Enter the length of the side: a" << endl;
	cin >> a;
	cout << "Enter the length of the side: b" << endl;
	cin >> b;
	cout << "Enter the length of the side: c" << endl;
	cin >> c;
	semiPerimeter = (a + b + c) / 2;
	cout << "The semi-perimeter is: " << endl;
	area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
	
	return area;
}
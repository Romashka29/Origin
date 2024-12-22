#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

class Figura {
protected:
	int angles = 0 ;

public:
	void setAngles(int a) { angles = a; }
	int getAngles() const { return angles; }
};
class triAngle: public Figura 
{
public:
	triAngle() { setAngles(3); }
};
class quadrangle : public Figura
{
public:
	quadrangle() { setAngles(4); }
};
int main()
{
	setlocale(LC_ALL,"rus");
	cout << "Количество сторон: "<< endl;
	Figura F;
	cout << "Фигура: " << F.getAngles() << endl;
	triAngle I;
	cout << "Количество углов треугольника: " << I.getAngles() << endl;
	quadrangle Q;
	cout<< "Количество углов четырехугольника: " << Q.getAngles() << endl;
	
	return EXIT_SUCCESS;
}
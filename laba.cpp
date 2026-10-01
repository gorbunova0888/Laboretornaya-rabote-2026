/******************************
* Автор:   Горбунова Настя    *
* Задание: Линейные алгоритмы * 
* Вариант: 2                  *
******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	double P, g, alpha;
	double x1, x2, x3;
	const double pi = 3.14;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	P = b / a;
	g = c / a;

	alpha = acos(-g / (2.0 * sqrt(pow(-P / 3.0, 3.0))));

	// formula for finding the first root
	x1 = 2.0 * sqrt(-P / 3.0) * cos(alpha / 3.0);

	// formula for finding the second root
	x2 = -2.0 * sqrt(-P / 3.0) * cos((alpha + pi) / 3.0);

	// formula for finding the third root
	x3 = -2.0 * sqrt(-P / 3.0) * cos((alpha - pi) / 3.0);

	
	cout << "x1 = " << x1 << endl;
	     << "x2 = " << x2 << endl;
	     << "x3 = " << x3 << endl;

	return 0;
}
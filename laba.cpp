/**********************
* Горбунова Настя * 
* Линейные алгоритмы * 
* Вариант 2 *
***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	double P, g, alpha;
	double x1, x2, x3;
	double pi = 3.14;

	//Блок ввода исходных данных
	a = 0.52;
	b = -3.552;
	c = 3.24;

	// Блок промежуточных вычислений
	P = b / a;
	g = c / a;

	alpha = acos(-g / (2.0 * sqrt(pow(-P / 3.0, 3.0))));

	// Блок вычисления корней уравнения
	x1 = 2.0 * sqrt(-P / 3.0) * cos(alpha / 3.0);
	x2 = -2.0 * sqrt(-P / 3.0) * cos((alpha + pi) / 3.0);
	x3 = -2.0 * sqrt(-P / 3.0) * cos((alpha - pi) / 3.0);

	//Блок выводы результатов
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "x3 = " << x3 << endl;

	return 0;
}
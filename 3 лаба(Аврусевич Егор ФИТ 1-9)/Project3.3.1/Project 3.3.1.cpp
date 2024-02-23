#include <iostream>
using namespace std;
//var 3
void main() {
	double i = -6, x = 4.5, z = -1.5e-6, d, f;   //присваиваем числам тип с плавающей точкой
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	cout << f;                                   //Выводим резулитат вычислений
}
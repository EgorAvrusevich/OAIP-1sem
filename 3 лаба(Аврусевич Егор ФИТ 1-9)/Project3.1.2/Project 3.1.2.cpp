#include <iostream>
using namespace std;
//var 4
void main() {
	double t = 6, y = -1.2, x = 0.4e6, p, q;     //присваиваем числам тип с плавающей точкой
	p = 2.6 * t + cos(y / (3 * x + y));
	q = sin(t) / cos(t);
	cout << q;                                   //выводим результат вычислений
}
#include <iostream>
using namespace std;
//var 5
void main() {
	double b = 40, x = 1.1, a = 5e-6, w, v;     //присваиваем числам тип с плавающей точкой
	w = (a + b) * tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);            //Выводим резулитат вычислений
	cout << v;
}
#include <iostream>
using namespace std;
//var 6
void main() {
	double y = 0.956, a = 5e-6, n = 4, t, u, s;        //присваиваем числам тип с плавающей точкой
	t = 1 / sqrt(y) + 14 * a;
	u = (t + 1) / (a + 2);
	s = log((2 * n / 3) + exp(-n) / u);
	cout << s;                                         //Выводим резулитат вычислений
} 
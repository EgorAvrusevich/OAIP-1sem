#include <iostream>
using namespace std;
//var 10
void main() {
	double z = 1.7, a = 4e-8, m = 3, n = 3, y, s;     //присваиваем числам тип с плавающей точкой
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m * n) / log(1 + z);
	cout << s;                                        //Выводим резулитат вычислений
}
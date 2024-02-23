#include <iostream>
using namespace std;
//var 2
void main() {
	double n = 2, b = -0.12, x = 1.3e-4, z, y;    //присваиваем числам тип с плавающей точкой 
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;
	cout << y;                                    //Выводим результат
}
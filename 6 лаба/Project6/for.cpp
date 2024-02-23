#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	float h, y, c, r, m, j[3] = { 4.2, 0.3, 1.7 };				//Вводим данные 
	c = 2, 1;
	r = 4 * pow(10,- 4);
	m = 7;
	for (int x = 0;  x < 3; x++) {								//Вводим цикл for для выполниния программы определённое количество раз
		h = (10 * r - j[x]) / (pow(c, 2) + exp(-m));
		y = (h * m - pow(j[x], 2) + pow((0.1 * c), 2));			//Вычисления по формулам
		cout << x+1 << ":h = " << h << endl;					//Вывод полученных результатов
		cout << " :y = " << y << endl;
	}
}
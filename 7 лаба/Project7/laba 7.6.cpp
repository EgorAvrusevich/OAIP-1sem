#include <iostream>
using namespace std;
int main() {
	float a = 1.774, m = 5, x = 3, y, z;					//Ввод данных
	int c = 1;
	while (x <= 5) {										//Выпоням цикл для х от 3 до 5 с шагов в 0.2
		y = sqrt(a + pow(m, 2) * pow(x, 2)) / (a + x) * m;	//Вычисление
		if (abs(y) >= 1) {									//Используем функцию if для совокупности
			z = pow(sin(y), 2);
		}
		else {
			z = y + 1;
		}
		cout << c << ":z = " << z << endl;					//Вывод данных
		c = c + 1;
		x = x + 0.2;										//Добовляем к х шаг(0.2)
	}
}
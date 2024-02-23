#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	float c = 2.1, r = 4 * pow(10,-4), m = 7, j = 0, h, y;		//Ввод данных
	int x = 0;
	while (j <= 1.7)											//Вводим цикл while для выполниния программы определённое количество раз
	{															
		h = (10 * r - j) / (pow(c, 2) + exp(-m));				
		y = (h * m - pow(j, 2) + pow((0.1 * c), 2));
		cout << x + 1 << ":h = " << h << endl;					//Вывод полученных результатов
		cout << " :y = " << y << endl;
		j = j + 0.1;
		x = x + 1;
	}
}
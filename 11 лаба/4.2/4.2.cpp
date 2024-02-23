#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tmp[33];
	int A, n, p;

	cout << "Введите число А: "; cin >> A;				//Вводим данные 
	cout << "Введите количество битов n: "; cin >> n;
	cout << "Введите пиозицию p: "; cin >> p;

	A |= ((1 << n) - 1) << (p - n);						//С помощью битовой операции применяем маску к числу А
	_itoa_s(A, tmp, 2);									//Представляем результат в двоичном виде
	cout << "Результат: " << tmp << endl;				//Выводим результат
}
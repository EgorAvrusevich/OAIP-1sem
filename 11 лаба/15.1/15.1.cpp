#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tmp[33];
	int A, mask;

	cout << "Введите число А: "; cin >> A;		//Вводим число
	_itoa_s(A, tmp, 2);							//Переводим число в двоичный код
	cout << "Число А в двоичном виде: " << tmp << endl;
	if ((A & 1) == 0) {							//Используем битовой оператор для проверки кратности числа,
												//в соответсвии с результатом выводим сам результат
		cout << "Число кратно 2";
	}
	else {
		cout << "Число не кратно 2";
	}
	return 0;
}
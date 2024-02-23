#include <iostream>
#include <ctime>
using namespace std;

int summ(int* A, int x, int y);//Вводим функцию для подсчёта суммы

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	int* A, size, FirstIndexMAX, LastIndexMin, min = 10, max = 0;
	cout << "Введите размер массива: "; cin >> size;//Ввод размера массива
	A = new int[size];//Выделение памяти
	for (int i = 0; i < size; i++) {//Цикл обрабатывающий все элементы массива
		A[i] = rand() % 21 - 10;//Присвоение элементу случаного значения от -10 до 10
		cout << A[i] << " ";
		if (A[i] <= min) {//Если элемент меньше либо равен миннимуму, то
			min = A[i];//Присваиваем миннимуму значение элемента
			LastIndexMin = i;//Запоминаем индекс элемента
		}
		if (A[i] >= max) max = A[i];//Если элемент больше либо равен максимуму, то присваиваем максимуму значение элемента
	}
	for (int i = 0; i < size; i++) {//Цикл обрабатывающий все элементы массива
		if (A[i] == max) {//Если элемент равен максимуму, то
			FirstIndexMAX = i;//Запоминаем индекс
			break;//Прерываем цикл
		}
	}
	cout << endl << "Сумма элементов между первым максимальным и последним миннимальным элементами: " << summ(A, LastIndexMin, FirstIndexMAX);//Используем функцию при выводе результата
	return 0;
}

int summ(int* A, int x, int y) {
	int summ = 0;
	if (x > y) {//Если x больше y, то
		for (y += 1; x > y; y++) {//цикл от y к x
			summ += A[y];//Суммируем
		}
	}
	else {//Иначе
		for (x += 1; y > x; x++) {//Цикл от x к y
			summ += A[x];//Суммируем
		}
	}
	return summ;//Возврощаем результат
}
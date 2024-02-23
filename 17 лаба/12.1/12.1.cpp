#include <iostream>
#include <ctime>
using namespace std;

//Вводим функцию для подсчёта количества отрицательных элементов на чётных местах
int findElements(int* A, int size, int count = 0) {
	for (int i = 1; i < size; i += 2) {
		if (A[i] < 0) {
			count++;
		}
	}
	cout << endl << "Количество элементов стоящих на чётных местах: " << count;
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int size;
	cout << "Введите размер массива: "; cin >> size;//Вводим размер массива
	int* A = new int[size];//Выделяем память
	cout << "Массив: " << endl;
	//Вводим цикл для присваивания элементам массива значений
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 21 - 10;
		cout << A[i] << " ";
	}
	findElements(A, size);//Используем функцию
	delete[] A;//Освобождение памяти
	return 0;
}
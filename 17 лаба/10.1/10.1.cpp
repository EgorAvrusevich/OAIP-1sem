#include <iostream>
using namespace std;

//Вводим функцию для нахождения чётных элементов массива на нечётных местах
int findElements(int* A, int n) {
	cout << "Номера чётных элемнтов, стоящих на не чётных местах: ";
	for (int i = 0; i < n; i += 2) {
		if (A[i] % 2 == 0) {
			cout << i + 1 << " ";
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int size;
	cout << "Введите размер массива: "; cin >> size;//Вводим размер массива
	cout << endl;
	int* A = new int[size];
	//Вводм элементы массива
	cout << "Введите элементы массива: ";
	for (int i = 0; i < size; i++) cin >> A[i];
	findElements(A, size);//Вызываем функцию
	delete[] A;//Очистка памяти
	return 0;
}
#include <iostream>
using namespace std;

//Вводим функцию для удаления нечётных элементов из массива
int delNum(int* A, int size, int i) {
	for (int k = i; k < size; k++) {
		*(A + k) = *(A + k + 1);
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int size, * A;
	cout << "Введите размер массива: "; cin >> size;//Вводим размер массива
	A = new int[size];//Выделяем память
	cout << "Массив: " << endl;
	//Цикл для присваивания значений элементам массива
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 21 - 10;
		cout << A[i] << " ";
	}
	for (int i = 0; i < size; i++) {//Цикл для удаления нечётных элементов
		if (A[i] % 2 == 1) {//Если элемент массива нечётный 
			delNum(A, size, i);//Используем функцию
			i--;
			size--;
		}
	}
	cout << endl << "Изменённый массив: " << endl;
	//Вывод изменённого массива
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	delete[] A;//Очистка памяти
	return 0;
}
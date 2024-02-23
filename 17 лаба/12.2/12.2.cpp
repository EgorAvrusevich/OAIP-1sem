#include <iostream>
#include <ctime>
using namespace std;

//Вводим функцию для нахождения строки с отрицательным элементом
int findNegative(int** A, int row, int column, int rowNegative) {
	bool foundNegative = false;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (A[i][j] < 0) {
				foundNegative = true;
				rowNegative = i + 1;
				break;
			}
		}
		if (foundNegative) break;
	}
	//Если был найден отрицательный элемент
	if (foundNegative) {
		//Выводим номер строки, содержащей отрицательный элемент
		cout << "Номер строк, содержащей отрицательный элемент: " << rowNegative << endl;
		//Все элементы столбца с этим номер уменшить вдвое
		for (int i = 0; i < row; i++) {
			A[i][rowNegative - 1] /= 2;
		}
		//Вывод результата
		cout << "Изменённая матрица: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {//если отрицательных элементов в матрице нет 
		cout << "Ни одна строка не содержит отрицательный элемент." << endl;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int row, column;
	cout << "Введите размеры матрицы: "; cin >> row >> column;//Вводим размер матрицы
	int** A = new int* [row];//Выделение памяти
	cout << "Исходная матрица: " << endl;
	//Цикл для присвоения элементам матрицы значений
	for (int i = 0; i < row; i++) {
		A[i] = new int[column];//Выделение памяти
		for (int j = 0; j < column; j++) {
			A[i][j] = rand() % 21 - 3;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	int rowNegative = 0;
	findNegative(A, row, column, rowNegative);//использование функции
	for (int i = 0; i < row; i++) delete[] A[i];//Очистка памяти
	delete[] A;//Очистка памяти
	return 0;
}
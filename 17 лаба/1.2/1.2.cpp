#include <iostream>
using namespace std;

void matrix(int** A, int** B, int size);//Вводим фунцию для умножения матриц

int main() {
	setlocale(LC_ALL, "russian");
	int** A, ** B, size;
	bool alright;
	cout << "Введите размерности матриц: "; cin >> size;//Вводим размерность матриц
	A = new int*[size];//Выделение памяти
	B = new int*[size];
	cout << "Введите элементы первой матрицы: " << endl;
	//Цикл для ввода данных первой матрицы
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];//Выделение памяти
		for (int j = 0; j < size; j++) {
			cin >> A[i][j];
		}
	}
	cout << "Введите элементы второй матрицы: " << endl;
	//Цикл для ввода данных второй матрицы
	for (int i = 0; i < size; i++) {
		B[i] = new int[size];//Выделение памяти
		for (int j = 0; j < size; j++) {
	 		cin >> B[i][j];
		}
	}
	cout << "Первая матрица: " << endl;
	//Цикл для вывода полученых данных первой матрицы
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Вторая матрица: " << endl;
	//Цикл для вывода полученых данных второй матрицы
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	//Цикл для определения есть ли в матрицах отрицательные элементы
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (A[i][j] > 0 && B[i][j] > 0) {//Если элемент первой и второй матрицы положительный, то
				alright = true;//Булевое значение равно 1
			}
			else {//Иначе
				alright = false;//Булево значение равно 0
				break;//Прерываем цикл
			}
		}
		if (!alright) break;//Если булево значение равно 0, то прерываем цикл
	}
	if (alright) {//Если булево значение равно 1, то
		cout << "Обе матрицы не имеют отрицательных элементов" << endl;
		cout << "Результат умножения матриц: " << endl;
		matrix(A, B, size);//Используем функцию для перемножения матриц
	}
	else {//Иначе
		cout << "В матрицах есть отрицательные элементы" << endl;//вывод
	}
	//Цикл для очистки памяти
	for (int i = 0; i < size; i++) {
		delete[] A[i];
		delete[] B[i];
	}
	delete[] A;//Очистка памяти
	delete[] B;
	return 0;
}

void matrix(int** A, int** B, int size) {
	int** C;
	C = new int* [size];//Выделение памяти
	//Цикл для перемножения матриц
	for (int i = 0; i < size; i++) {
		C[i] = new int[size];
		for (int j = 0; j < size; j++) {
			C[i][j] = 0;
			for (int k = 0; k < size; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//Цикл для вывода получившейся матрицы
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++)
		delete[] C[i];//Очистка памяти
	delete[] C;//Очистка памяти
	return;
}
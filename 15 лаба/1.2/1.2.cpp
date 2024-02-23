#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int size, **A, column;
	bool plus;
	cout << "Введите размер двумерного массива n = "; cin >> size;//Запрашиваем размерность массива
	A = new int* [size];    //выделение динам.памяти
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < size; i++) {//Используем цикл для выделения динам. памяти иприсваивания значенияэлементам массива
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			cin >> A[i][j];
	}
	cout << "Исходная матрица: " << endl;
		//Выводим исходную матрицу
	for (int** ptr = A; ptr < A + size; ptr++)
	{
		for (int* str = *ptr; str < *ptr + size; str++)
			cout << *str << " ";
		cout << endl;
	}
		//Определяем в каком толбце все элементы положительные
	for (int j = 0; j < size; j++) {//Перебираем столбцы
		for (int i = 0; i < size; i++) {//Перебираем строки
			if (A[i][j] < 0) {//Если элемент массива меньше 0, то
				plus = false;//Булево значение равно 0
				break;//Прерываем цикл
			}
			else {//Иначе
				plus = true;//Булево значение равно 1
			}
		}
		if (plus = true) {//Если булево значение равно 1, то
			column = j;//присваиваем переменной column значение номер столбца
			break;//прерываем цикл
		}
	}
	for (int i = 0; i < size; i++) {//Перебираем все строки
		A[i][column - 1] *= -1;//Присваиваем всем значениям стобца идущего перед столбцов в котором все числа 
	}
	cout << "Изменёная матрица: " << endl;
		//Выводим изменёную матрицу
	for (int** ptr = A; ptr < A + size; ptr++)
	{
		for (int* str = *ptr; str < *ptr + size; str++)
			cout << *str << " ";
		cout << endl;
	}
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] A[k];
	delete[] A;

}
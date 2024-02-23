#include <iostream>
#include <ctime>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int** A, columns, rows, count = 0, size;//Вводим данные
	cout << "Введите количество строк в матрице = "; cin >> rows;//Запрашиваем количество строк
	cout << "Введите количество столбцов в матрице = "; cin >> columns;//Запрашиваем количество столбцов
	size = columns * rows;//Находим размер матрицы
	A = new int* [size];//Выделяем память
	//Присваивание элементам массива случайных значений от -10 до 10 и их вывод на экран
	for (int i = 0; i < rows; i++) {
		A[i] = new int[size];
		for (int j = 0; j < columns; j++) {
			A[i][j] = rand() % 21 - 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int j = 0; j < columns; j++) {//Перебираем все столбцы
		for (int i = 0; i < rows; i++) {//Перебираем все строки в столбце
			if (A[i][j] == 0) {//Если элемент равен 0, то
				count++;//Инрементируем количество столцов с нулевым элементом
				break;//Прерываем цикл
			}
		}
	}
	cout << endl << "Количество столбцов с нулевым элементом = " << count;//Выводим результат
	for (int k = 0; k < rows; k++) 
		delete[] A[k];//Освобождаем память
	delete[] A;
}
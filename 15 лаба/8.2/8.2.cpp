#include <iostream>
#include <ctime>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int** A, columns, rows, index = -1, size;//Вводим данные
	bool finding = false;
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
				index = j;//Инрементируем количество столцов с нулевым элементом
				finding = true;
				break;//Прерываем цикл
			}
		}
		if (finding == true) break;
	}
			//Выводим результат
	if (index == -1) {
		cout << "В матрице нет столбца с нулевым элементом";
	}
	else {
		cout << endl << "Столбец с нулевым элементом = " << index + 1;
	}
	for (int k = 0; k < rows; k++)
		delete[] A[k];//Освобождаем память
	delete[] A;
}
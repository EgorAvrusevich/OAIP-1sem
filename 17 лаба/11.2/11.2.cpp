#include <iostream>
#include <ctime>
using namespace std;

//Вводим для определения наличия отрицательного элемента в строке
int check(bool& hasNegative, int size, int i, int** A) {
	for (int j = 0; j < size; j++) {
		if (A[i][j] < 0) {
			hasNegative = true;
			break;
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int size;
	cout << "Введите размерность матрицы: "; cin >> size;//Ввод разрности матрицы
	int** A = new int* [size];//Выделения памяти
	cout << "Матрица: " << endl;
	//Цикл для присваивания значений элементам матрицы
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];//Выделение памяти
		for (int j = 0; j < size; j++) {
			A[i][j] = rand() % 21 - 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	int summ = 0;
	//цикл для поиска строк без отрицательных элементов и нахождения их суммы
	for (int i = 0; i < size; i++) {
		bool hasNegative = false;
		check(hasNegative, size, i, A);
		if (!hasNegative) {//Если нет отрицательных элементов в строке, то
			for (int j = 0; j < size; j++) {
				summ += A[i][j];//Суммируем элементы 
			}
		}
	}
	cout << "Сумма элементов строк без отрицательных элементов: " << summ << endl;//Вывод результата
	for (int i = 0; i < size; i++) delete[] A[i];//Освобождение памяти
	delete[] A;//Освобождение памяти
	return 0;
}
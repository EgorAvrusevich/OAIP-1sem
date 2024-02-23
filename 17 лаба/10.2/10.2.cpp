#include <iostream>
using namespace std;

//Вводим функцию для поиска максимального элемента в матрице
int findMax(int** A, int n, int m, int& max, int& maxN, int& maxM, int& count) {
	max = A[0][0];
	count = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				maxN = i;
				maxM = m;
				count = 1;
			}
			else {
				if (A[i][j] == max) {
					count++;
				}
			}
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int n, m;
	cout << "Ведите размеры матрицы: "; cin >> n >> m;//Ввод размеров матрицы
	int** A;
	A = new int* [n];//Выделение памяти
	cout << "Введите элементы матрицы: ";
	//Цикл для ввода элементов массива
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];//Выделения памяти
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	int max, maxN, maxM, count;
	findMax(A, n, m, max, maxN, maxM, count);//Используем функцию
	//Выводим результат в зависимости от условия
	if (count > 1) {
		cout << "Максимальное число: " << max << endl;
		cout << "Индексы: [" << maxN << "][" << maxM << "]" << endl;
		cout << "Количество повторений: " << count << endl;
	}
	else {
		cout << "Максимальное число не повторяется." << endl;
	}
	//Очистка памяти
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	return 0;
}
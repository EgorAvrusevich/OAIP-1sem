#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void matrix();//Вводим функцию для первого задания
void stroke();//Вводим функцию для второго задания

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int choose;
	do {//Вводим цикл do while пока choose не будет равен 3
		cout << "Выберите функцию:" << endl;
		cout << "1 - Нахождение количества отрицательных, положительных и нулевых элементов массива" << endl;
		cout << "2 - Определение количества слов в строке" << endl;
		cout << "3 - Выход" << endl;
		cin >> choose;//Вводим choose 
		switch (choose) {//Используем switch для выбора действия
		case 1:
			matrix();//Если choose равен 1, то выполняем функцию matrix
			break;//Конец кейса
		case 2:
			stroke();//Если choose равен 2, то выполняем функуцию stroke
			break;//Конец кейса
		case 3:
			break;//Если choose равен 3, то конец кейса и конец программы
		default: cout << "Ошибка, введите корректный ответ";//При любом другом вводе, вывод ошибки
		}
	} while (choose != 3);
	return 0;
}


void matrix() {
	int** A, rows, columns, size, count_minus = 0, count_plus = 0, count_zero = 0;
	cout << "Введите количество строк в матрице = "; cin >> rows;//Ввод количества строк матрицы
	cout << "Введите количество столбцов в матрице = "; cin >> columns;//Ввод количества столбцов матрицы
	size = rows * columns;//Размер матрицы равен количество строк * количество столбцов
	A = new int* [size];//Выделение памяти
	cout << "Исходная матрица: " << endl;
	for (int i = 0; i < rows; i++) {//Цикл перебирающий все строки
		A[i] = new int[size];//Выделение памяти
		for (int j = 0; j < columns; j++) {//Цикл перебирающий все столбцы
			A[i][j] = rand() % 21 - 10;//Присваивание элементу случайного значения от -10 до 10
			if (A[i][j] > 0) count_plus++;//Если элемент больше нуля, то засчитываем его в положительные элементы
			else if (A[i][j] == 0) count_zero++;//Если элемент равен нулю, то записываем его в нулевые элементы
			else if (A[i][j] < 0) count_minus++;//Если элемент меньше 0, то записываем его в отрицательные элементы
			cout << A[i][j] << " ";//Вывод элемента
		}
		cout << endl;
	}
	cout << "Количество положительных чисел = " << count_plus << endl;//Вывод результата
	cout << "Количество нулевых чисел = " << count_zero << endl;
	cout << "Количество отрицательных чисел = " << count_minus << endl << endl;
	for (int k = 0; k < rows; k++)
		delete[] A[k];//Очистка памяти
	delete[] A;//Очистка памяти
	return;
}

void stroke() {
	string str;
	int word_count = 0;
	cin.ignore();//Очистка буффера ввода
	getline(cin, str);//Ввод строки
	for (char& c : str) {//Обрабатываем каждый символ строки
		if (c == ' ') word_count++;//Если символ является пробелом то засчитываем слово
	}
	cout << "Количество слов: " << word_count + 1 << endl << endl;//Вывод результата
	return;
}
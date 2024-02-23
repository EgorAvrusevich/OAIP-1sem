#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void stroke();//Вводим функцию для первого задания
void matrix();//Вводим функцию для второго задания

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int choose;
	do {//Вводим цикл do while пока choose не будет равен 3
		cout << "Выберите вариант" << endl;
		cout << "1 - Замена всех отрицательных значений на положительные в нечётных строках матрицы" << endl;
		cout << "2 - Написание всех слов с заглаваной буквы" << endl;
		cout << "3 - Выход" << endl;
		cin >> choose;//Вводим choose 
		switch (choose) {//Используем switch для выбора действия
		case 1: matrix();//Если choose равен 1, то выполняем функцию matrix
			break;//Конец кейса
		case 2: stroke();//Если choose равен 2, то выполняем функуцию stroke
			break;//Конец кейса
		case 3: break;//Если choose равен 3, то конец кейса и конец программы
		default: cout << "Ошибка, введите корректный ответ";//При любом другом вводе, вывод ошибки
		}
	} while (choose != 3);
	return 0;
}

void matrix() {
	int** A, rows, columns, size;
	cout << "Введите количество строк в матрице = "; cin >> rows;//Ввод количества строк матрицы
	cout << "Введите количество столбцов в матрице = "; cin >> columns;//Ввод количества столбцов матрицы
	size = rows * columns;//Размер матрицы равен количество строк * количество столбцов
	A = new int* [size];//Выделение памяти
	cout << "Исходная матрица: " << endl;
	for (int i = 0; i < rows; i++) {//Цикл перебирающий все строки
		A[i] = new int[size];//Выделение памяти
		for (int j = 0; j < columns; j++) {//Цикл перебирающий все столбцы
			A[i][j] = rand() % 21 - 10;//Присваивание элементу случайного значения от -10 до 10
			cout << A[i][j] << " ";//Вывод элемента
		}
		cout << endl;
	}
	cout << "Изменённая матрица: " << endl;
	for (int i = 0; i < rows; i++) {//Цикл перебирающий все строки
		for (int j = 0; j < columns; j++) {//Цикл перебирающий все столбцы
			if (i % 2 == 0) cout << abs(A[i][j]) << " ";//Если строка нечётная, то вывод элемента по модулю
			else cout << A[i][j] << " ";//Иначе вывод элемента
				}
				cout << endl;
			}
	cout << endl;
	for (int k = 0; k < rows; k++)
		delete[] A[k];//Очистка памяти
	delete[] A;//Очистка памяти
}

void stroke(){
	string str, edited;
	cout << "Введите предложение: " << endl;
	cin.ignore();//Очистка буффера ввода
	getline(cin, str);//Вводим строку
	bool capitalizeNext = true;//Вводим булеву переменную для определения, нужно ли писать следующий символ в верхнем регистре
	for (char& c : str) {//Создаём цикл для обработки строки
		if (ispunct(c) || isspace(c)) {//Если символом является точка или пробел, то
			capitalizeNext = true;//capitalize = 1
			edited += c;//Дабовляем символ
		}
		else if (capitalizeNext && islower(c)) {//Иначе если capitalize = 1 и сивол нижнего регистра, то
			edited += toupper(c);//Дабовляем символ верхнего регистра
			capitalizeNext = false;//capitalize = 0
		}
		else if (!capitalizeNext && isupper(c)) {//Иначе если capitalize = 0 и символ Верхнего регистра, то
			edited += tolower(c);//Дабовляем символ Верхнего регистра
		}
		else edited += c;//Иначе просто дабовляем символ
	}
	cout << "Изменённое предложение: " << endl << edited << endl;//Вывод результата
}
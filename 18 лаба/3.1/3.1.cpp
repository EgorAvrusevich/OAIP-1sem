#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	string A = "matrix.txt";
	string B = "result.txt";
	ifstream inputfile(A);//Открываем файл для чтения
	if (!inputfile.is_open()) {//Если произошла ошибка
		cout << "Ошибка открытия файла: " << A;//Вывод
		return 0;//Остановка программы
	}
	
	ofstream outputFile(B);//Открываем файл для редактирования
	if (!outputFile.is_open()) {//Если произошла ошибка
		cout << "Ошибка открытия файла: " << B;//Вывод 
		return 0;//Остановка программы
	}

	vector<vector<int>> matrix;//Создаём матрицу
	int column;
	inputfile >> column;//Берём из файла количество столбцов

	int num;
	while(inputfile >> num){//Обрабатываем все данные из файла
		matrix.emplace_back();
		matrix.back().push_back(num);//Добовляем первый элемент строки матрицы
		for (int i = 1; i < column; i++) {
			inputfile >> num;//Берём следующий элемент из файла
			matrix.back().push_back(num);//Добовляем следующий элемент строки матрицы
		}
	}
	outputFile << column << endl;//Добовляем в файл количество столбцов матрицы
	for (int i = 0; i < column; i++) {//Перебираем все строки матрицы
		for (int j = 0; j < column; j++) {//Перебираем все столбцы матрицы
			outputFile << matrix[j][i] << " ";//Отправляем в файл транспорированную матрицу
		}
		outputFile << endl;
	}
	outputFile.close();//Закрываем файл
	inputfile.close();//Закрываем файл
	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string F1 = "F1.txt";
	string F2 = "F2.txt";

	ifstream inputFile(F1);//Открываем файл для чтения
	if (!inputFile.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << F1;//Вывод ошибки
		return 0;//Остановка программы
	}

	ofstream outputFile(F2);//Открываем файл для редактирования
	if (!outputFile.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << F2;//Вывод ошибки
		return 0;//Остановка программы
	}

	string line;

	while (inputFile >> line) {//Обрабатываем все строки из файла F1
		if (line.back() == 'a') {//Если в конце строки находится символ а, то
			outputFile << line << endl;//Записываем строку в файл F2
		}
	}

	inputFile.close();//Закрываем файл 
	outputFile.close();//Закрываем файл
	return 0;
}
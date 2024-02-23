#include <iostream>
#include <fstream>
#include <string>
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
	while (inputFile >> line) {//Обрабатываем все данные из файла F1
		bool EnableDigits = false;//Вводим булеву переменную для определения наличия цифр в строке
		for (char c : line) {//Перебираем все элементы строки
			if (isdigit(c)) {//Если элемент является цифрой, то
				EnableDigits = true;//Булева переменная равна 1
				break;//Остановка цикла
			}
		}
		if (!EnableDigits) {//Если булева переменная равно 0, то
			outputFile << line << endl;//Записываем данную строку в файл F2
		}
	}

	inputFile.close();//Закрываем файл
	outputFile.close();//Закрываем файл
	return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string f = "f.txt";
	string g = "g.txt";
	int k;
	cout << "Введите k = "; cin >> k;//Вводим переменную k

	ifstream file(f);//Открываем файл для чтения
	if (!file.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << f << endl;//Вывод
		return 0;//Остановка программы
	}

	ofstream outputFile(g);//Откытие файла для редактирования
	if (!outputFile.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << g << endl;//Вывод
		return 0;//Остановка программы
	}
	int num;
	while (file >> num) {//Перебираем все данные файла
		if (num % k == 0) {//Если число кратно к, то
			outputFile << num << " ";//Записываем в файл g
		}
	}
	file.close();//Закрываем файл
	outputFile.close();//Закрываем файл
	return 0;
}
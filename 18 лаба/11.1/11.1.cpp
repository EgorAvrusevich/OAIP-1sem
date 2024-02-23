#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string A = "fileA.txt";
	string B = "fileB.txt";
	ifstream inputFile(A);//Открываем файл для чтения
	if (!inputFile.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << A;//Вывод ошибки
		return 0;//Остановка программы
	}

	ofstream outputFile(B);//Открываем файл для редактирования
	if (!outputFile.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << B;//Вывод ошибки
		return 0;//Остановка программы
	}

	int num, arrUnicNum[100], unicNum = 0;//Вводим массив для хранения уникальных чисел

	while (inputFile >> num) {//Обрабатываем все данные из файла fileA
		bool dupl = false;//Вводим булеву переменную для определения дублирования числа
		for (int i = 0; i < unicNum; i++) {//Цикл для перебора всех уникальных чисел
			if (num == arrUnicNum[i]) {//Если число из файла равно уникальному, то
				dupl = true;//Булева переменная равна 1
				break;//остановка цикла
			}
		}
		if (!dupl) {//Если булева переменная равна 0, то
			arrUnicNum[unicNum] = num;//Записываем число из файла в массив с уникальными числами
			unicNum++;//Инкрементируем количество уникальных чисел
			outputFile << num << " ";//Ввод в файл fileB это число
		}
	}

	inputFile.close();//Закрываем файл
	outputFile.close();//Закрываем файл

	return 0;
}
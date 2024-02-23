#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string A = "nameA.txt";
	string B = "nameB.txt";
	string C = "nameC.txt";
	string D = "nameD.txt";
	
	ifstream inputFileA(A);//Открываем файл для чтения
	if (!inputFileA.is_open()) {//Если произошла ошибка
		cout << "Ошибка открытия файла: " << A;//Вывод
		return 0;//Остановка программы
	}

 	ifstream inputFileB(B);//Открываем файл для чтения
	if (!inputFileB.is_open()) {//Если произошла ошибка
 		cout << "Ошибка открытия файла: " << B;//Вывод
		return 0;//Остановка программы
	}

 	ifstream inputFileC(C);//Открываем файл для чтения
	if (!inputFileA.is_open()) {//Если произошла ошибка
 		cout << "Ошибка открытия файла: " << C;//Вывод
		return 0;//Остановка программы
	}

	ofstream outputFileD(D);//Открываем файл для редактирования
	if (!outputFileD.is_open()) {//Если произошла ошибка
 		cout << "Ошибка открытия файла: " << D;//Вывод
		return 0;//Остановка программы
	}

	int numA, numB, numC;
	//Передаём элементы из файлов A, B и С в файл D
	while (inputFileA >> numA) {
 		inputFileB >> numB;
 		inputFileC >> numC;
		outputFileD << numA << " " << numB << " " << numC << " ";
	}
	//Закрываем файлы
 	inputFileA.close();
 	inputFileB.close();
	inputFileC.close();
 	outputFileD.close();
}
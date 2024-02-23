#include <iostream>
#include <string>
using namespace std;

void findWordsWithEnding(const string& input,const string& ending){//Вводим функцию для поиска слов с окончанием
	setlocale(LC_ALL, "Russian");
	string word = "";//Вводим переменную для хранения слова
	for (char c : input) {//Вводим цикл для прохождения по всем символам строки
		if (c != ' ') {//Если символ не является пробелом, добовляем его к текущему слову
			word += c;
		}
		else {//Иначе
			if (word.size() >= ending.size() && word.rfind(ending) == word.size() - ending.size()) {//проверям содержит ли слово окончание
				cout << word << endl;//Выводим слово, если оно содержит заданное окончание
			}
			word = "";//Сбрасываем текущее слово
		}
	}
	if (word.size() >= ending.size() && word.rfind(ending) == word.size() - ending.size()) {//Проверяем последнее слово после завершения цикла
		cout << word << endl;//Выводим последнее слово, если оно содержит окончание
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	string input;
	cout << "Введите строку: ";
	getline(cin, input);//Вводим строку
	
	string ending;
	cout << "Задайте окончание: ";
	cin >> ending;//Вводим окончание
	
	findWordsWithEnding(input, ending);//Используем функцию для поиска слов с нужным окончанием
	
	return 0;
}
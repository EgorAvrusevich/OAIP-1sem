#include <iostream>
#include <cstring>
using namespace std;

bool isWordEncountered(char word[][50], int numEncounteredWords, char* currentWord) {//Вводим функции для поиска уникальных слов
	for (int i = 0; i < numEncounteredWords; i++) {//Выполнять цикл столько раз, сколько уникальных слов
		if (strcmp(word[i], currentWord) == 0) {//Если слово под индексом i равно текущему слову, то
			return true;	//Вернуть 1
		}
	}
	return false;			//Вернуть 0
}

int main() {
	setlocale(LC_ALL, "Russian");
	char sentence[] = "Пися попа пися попа пися попа";										//Вводим данные
	char encounteredWords[50][50];
	int numEncounteredWords = 0;
	bool inWord = 0;
	char currentWord[50];
	int currentWordIndex = 0;

	for (int i = 0; i <= strlen(sentence); ++i) {//Выполнять цикл столько раз, сколько символов в строке
		char currentChar = sentence[i];//Присвоить переменной(текущий символ) значение равное элементу в строке под индексом i 
		if (currentChar == ' ' || currentChar == '\0') {//Если текущий символ равен 0 или концу строки, то
			currentWord[currentWordIndex] = '\0';//Завершаем текущее слово
			if (!isWordEncountered(encounteredWords, numEncounteredWords, currentWord)) {//Если введённая функция возвращает 0, то
				cout << currentWord << " ";//Вывод текущего слова
				strcpy_s(encounteredWords[numEncounteredWords], currentWord);
				++numEncounteredWords;//+ уникальное слово
			}
			currentWordIndex = 0;//Сбрасываем текущий индекс в слове
			inWord = false;
		}
		else {//Иначе текущее слова выводится в отдельный массив
			currentWord[currentWordIndex] = currentChar;//
			++currentWordIndex;//
			inWord = true;
		}
	}
	cout << endl;
	return 0;
}
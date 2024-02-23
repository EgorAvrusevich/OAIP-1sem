#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string dict[] = { "house","esuoh","lil","ill" };//Вводим словарь
	
	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++) {//С помощью цикла выводим все слова
		cout << dict[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++) {//Выпонять цикл столько раз сколько слов в словаре
		if (dict[i].size() == dict[i + 1].size()) {//Если длина слов одинакова, то
			sort(dict[i].begin(), dict[i].end());//Сортируем слова
			sort(dict[i + 1].begin(), dict[i + 1].end());
		}

		if (dict[i] == dict[i + 1]) {//Если слова после сортировки равны, то
			cout << "Слово " << i << " состоит из тех же букв что и слово " << i + 1 << endl;//Выводим результат
		}
	}
	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string A = "fileA.txt";

	ifstream file(A);//Открываем файл для чтения
	if (!file.is_open()) {//В случае ошибки открытия
		cout << "Ошибка открытия файла: " << A;//Вывод ошибки
		return 0;//Остановка программы
	}

	int x;
	cout << "Введите число x = "; cin >> x;//Запрашиваем x

	int n = 0, i = 0;
	int* arr = new int[100];//Занимаем память для массива

	//Используем цикл для переноса всех данных из файла в массив
	while (file >> arr[i]) {
		n++;//Считаем количество элементов массива
		i++;
	}
	file.close();//Закрываем файл

	int clossestSum = INT_MAX;
	int num1, num2;
	//Ищем 2 числа средннее арифметическое которых ближе всего к x
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = (arr[i] + arr[j]) / 2;
			if (abs(sum - x) < abs(clossestSum - x)) {
				clossestSum = sum;
				num1 = arr[i];
				num2 = arr[j];
			}
		}
	}
	cout << "Два числа из файла, среднее арифметическое которых наиболее ближе к x:" << endl << num1 << " " << num2;//Выводим результат
	delete[] arr;//Освобождаем память
	return 0;
}
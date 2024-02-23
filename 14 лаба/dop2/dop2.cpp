#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int n, A[N][N];//Вводим матрицу
    cout << "Введите порядок латинского квадрата (n): ";cin >> n;//Запрашиваем порядок латинского квадрата
    for (int i = 0; i < n; i++) {//Выполнять цикл n раз
        for (int j = 0; j < n; j++) {//Выполнять цикл n раз
            A[i][j] = (i + j) % n + 1;//Присваиваем элементу матрицы значение
        }
    }
    cout << "Латинский квадрат порядка " << n << ":" << endl;
    for (int i = 0; i < n; i++) {//Выполнять цикл n раз
        for (int j = 0; j < n; j++) {//Выполнять цикл n раз
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
}
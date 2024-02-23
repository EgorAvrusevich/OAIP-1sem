#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    double matrix[N][N];
    int n; // Размерность матрицы
    cout << "Введите размерность матрицы: ";
    cin >> n;
    // Заполнение матрицы
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    // Сортировка элементов матрицы
    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n * n - 1; j++) {
            if (matrix[j / n][j % n] < matrix[(j + 1) / n][(j + 1) % n]) {
                swap(matrix[j / n][j % n], matrix[(j + 1) / n][(j + 1) % n]);
            }
        }
    }
    // Заполнение главной диагонали отсортированными элементами
    for (int i = 0; i < n; i++) {
        matrix[i][i] = matrix[i][i];
    }
    // Вывод результирующей матрицы
    cout << "Результирующая матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}

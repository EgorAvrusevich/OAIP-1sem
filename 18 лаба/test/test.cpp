#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Функция для чтения матрицы из файла
vector<vector<double>> readMatrix(const string& fileName) {
    ifstream file(fileName);//Открываем файл для чтения
    if (!file.is_open()) {//Если файл не получилось открыть, то
        cerr << "Ошибка открытия файла: " << fileName << endl;//Вывод ошибки
        return {};//Остановка программы
    }

    vector<vector<double>> matrix;//Задаём матрицу
    int numCols;
    file >> numCols;//Достаём из файла количество столбцов

    double num;
    while (file >> num) {//Цикл выполняющийся пока не обрабоются все данные файла
        matrix.emplace_back();
        matrix.back().push_back(num);//Добавляем первый элемент строки матрицы
        for (int i = 1; i < numCols; ++i) {
            file >> num;//Берёт следующий элемент матрицы
            matrix.back().push_back(num);//Добовляем следующий элемент строки матрицы
        }
    }

    file.close();//Закрытие файла
    return matrix;//Возврощает матрицу
}

// Функция для записи матрицы в файл
void writeMatrix(const vector<vector<double>>& matrix, const string& fileName) {
    ofstream file(fileName);//Открываем файл для редактирования
    if (!file.is_open()) {//Если файл не получилось открыть,то
        cerr << "Ошибка открытия файла: " << fileName << endl;//Вывод ошибки
        return;//Остановка программы
    }

    int numCols = matrix[0].size();//Определяем количество столбцов матрицы путём подсчёта элементов в строке матрицы
    file << numCols << endl;//Ввод в файл количества столбцов матрицы

    for (const auto& row : matrix) {//Цикл перебирающий все строки матрицы
        for (int i = 0; i < numCols; ++i) {//Цикл перебирающий все столбцы матрицы
            file << row[i] << ' ';//Запись элемента матрицы в файл
        }
        file << endl;
    }

    file.close();//Закрытие файла
}

// Функция для перемножения матриц
vector<vector<double>> multiplyMatrices(const vector<vector<double>>& matrix1,
    const vector<vector<double>>& matrix2) {
    int numRows1 = matrix1.size();//Присваиваем переменной количество строк в 1 матрице
    int numCols1 = matrix1[0].size();//Присваиваем переменной количество столбцов в 1 матрице
    int numRows2 = matrix2.size();//Присваиваем переменной количество строк в 2 матрице
    int numCols2 = matrix2[0].size();//Присваиваем переменной количество столбцов во 2 матрице

    if (numCols1 != numRows2) {//Если колчиство стобцов первой матрицы не равно количеству строк второй, то
        cerr << "Невозможно выполнить умножение матриц" << endl;//Вывод
        return {};//Остановка программы
    }

    vector<vector<double>> result(numRows1, vector<double>(numCols2, 0.0));//создаём матрицу с numrows1 строками и numcols2 столбцами 
                                                                            //и заполняя все элементы этой матрицы значением 0.0

    //Перемножаем матрицы и записываем результат в матрицу result
    for (int i = 0; i < numRows1; ++i) {
        for (int j = 0; j < numCols2; ++j) {
            for (int k = 0; k < numCols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;//Возврощаем матрицу result
}

int main() {
    string fileA = "fA.txt";
    string fileB = "fB.txt";
    string fileC = "fC.txt";

    // Чтение матриц из файлов
    vector<vector<double>> matrixA = readMatrix(fileA);
    vector<vector<double>> matrixB = readMatrix(fileB);

    // Проверка на успешное чтение матриц
    if (matrixA.empty() || matrixB.empty()) {
        return 1;
    }

    // Перемножение матриц
    vector<vector<double>> matrixC = multiplyMatrices(matrixA, matrixB);

    // Запись результата в файл
    writeMatrix(matrixC, fileC);

    return 0;
}
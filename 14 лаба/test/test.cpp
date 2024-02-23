#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    double matrix[N][N];
    int n; // ����������� �������
    cout << "������� ����������� �������: ";
    cin >> n;
    // ���������� �������
    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    // ���������� ��������� �������
    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n * n - 1; j++) {
            if (matrix[j / n][j % n] < matrix[(j + 1) / n][(j + 1) % n]) {
                swap(matrix[j / n][j % n], matrix[(j + 1) / n][(j + 1) % n]);
            }
        }
    }
    // ���������� ������� ��������� ���������������� ����������
    for (int i = 0; i < n; i++) {
        matrix[i][i] = matrix[i][i];
    }
    // ����� �������������� �������
    cout << "�������������� �������:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}

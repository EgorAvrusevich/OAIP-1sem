#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int n, A[N][N];//������ �������
    cout << "������� ������� ���������� �������� (n): ";cin >> n;//����������� ������� ���������� ��������
    for (int i = 0; i < n; i++) {//��������� ���� n ���
        for (int j = 0; j < n; j++) {//��������� ���� n ���
            A[i][j] = (i + j) % n + 1;//����������� �������� ������� ��������
        }
    }
    cout << "��������� ������� ������� " << n << ":" << endl;
    for (int i = 0; i < n; i++) {//��������� ���� n ���
        for (int j = 0; j < n; j++) {//��������� ���� n ���
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
}
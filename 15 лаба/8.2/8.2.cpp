#include <iostream>
#include <ctime>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int** A, columns, rows, index = -1, size;//������ ������
	bool finding = false;
	cout << "������� ���������� ����� � ������� = "; cin >> rows;//����������� ���������� �����
	cout << "������� ���������� �������� � ������� = "; cin >> columns;//����������� ���������� ��������
	size = columns * rows;//������� ������ �������
	A = new int* [size];//�������� ������
	//������������ ��������� ������� ��������� �������� �� -10 �� 10 � �� ����� �� �����
	for (int i = 0; i < rows; i++) {
		A[i] = new int[size];
		for (int j = 0; j < columns; j++) {
			A[i][j] = rand() % 21 - 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int j = 0; j < columns; j++) {//���������� ��� �������
		for (int i = 0; i < rows; i++) {//���������� ��� ������ � �������
			if (A[i][j] == 0) {//���� ������� ����� 0, ��
				index = j;//������������� ���������� ������� � ������� ���������
				finding = true;
				break;//��������� ����
			}
		}
		if (finding == true) break;
	}
			//������� ���������
	if (index == -1) {
		cout << "� ������� ��� ������� � ������� ���������";
	}
	else {
		cout << endl << "������� � ������� ��������� = " << index + 1;
	}
	for (int k = 0; k < rows; k++)
		delete[] A[k];//����������� ������
	delete[] A;
}
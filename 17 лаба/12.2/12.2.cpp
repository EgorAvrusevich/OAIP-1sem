#include <iostream>
#include <ctime>
using namespace std;

//������ ������� ��� ���������� ������ � ������������� ���������
int findNegative(int** A, int row, int column, int rowNegative) {
	bool foundNegative = false;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (A[i][j] < 0) {
				foundNegative = true;
				rowNegative = i + 1;
				break;
			}
		}
		if (foundNegative) break;
	}
	//���� ��� ������ ������������� �������
	if (foundNegative) {
		//������� ����� ������, ���������� ������������� �������
		cout << "����� �����, ���������� ������������� �������: " << rowNegative << endl;
		//��� �������� ������� � ���� ����� �������� �����
		for (int i = 0; i < row; i++) {
			A[i][rowNegative - 1] /= 2;
		}
		//����� ����������
		cout << "��������� �������: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {//���� ������������� ��������� � ������� ��� 
		cout << "�� ���� ������ �� �������� ������������� �������." << endl;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int row, column;
	cout << "������� ������� �������: "; cin >> row >> column;//������ ������ �������
	int** A = new int* [row];//��������� ������
	cout << "�������� �������: " << endl;
	//���� ��� ���������� ��������� ������� ��������
	for (int i = 0; i < row; i++) {
		A[i] = new int[column];//��������� ������
		for (int j = 0; j < column; j++) {
			A[i][j] = rand() % 21 - 3;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	int rowNegative = 0;
	findNegative(A, row, column, rowNegative);//������������� �������
	for (int i = 0; i < row; i++) delete[] A[i];//������� ������
	delete[] A;//������� ������
	return 0;
}
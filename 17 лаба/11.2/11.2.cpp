#include <iostream>
#include <ctime>
using namespace std;

//������ ��� ����������� ������� �������������� �������� � ������
int check(bool& hasNegative, int size, int i, int** A) {
	for (int j = 0; j < size; j++) {
		if (A[i][j] < 0) {
			hasNegative = true;
			break;
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int size;
	cout << "������� ����������� �������: "; cin >> size;//���� ��������� �������
	int** A = new int* [size];//��������� ������
	cout << "�������: " << endl;
	//���� ��� ������������ �������� ��������� �������
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];//��������� ������
		for (int j = 0; j < size; j++) {
			A[i][j] = rand() % 21 - 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	int summ = 0;
	//���� ��� ������ ����� ��� ������������� ��������� � ���������� �� �����
	for (int i = 0; i < size; i++) {
		bool hasNegative = false;
		check(hasNegative, size, i, A);
		if (!hasNegative) {//���� ��� ������������� ��������� � ������, ��
			for (int j = 0; j < size; j++) {
				summ += A[i][j];//��������� �������� 
			}
		}
	}
	cout << "����� ��������� ����� ��� ������������� ���������: " << summ << endl;//����� ����������
	for (int i = 0; i < size; i++) delete[] A[i];//������������ ������
	delete[] A;//������������ ������
	return 0;
}
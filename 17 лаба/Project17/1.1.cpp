#include <iostream>
#include <ctime>
using namespace std;

int summ(int* A, int x, int y);//������ ������� ��� �������� �����

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	int* A, size, FirstIndexMAX, LastIndexMin, min = 10, max = 0;
	cout << "������� ������ �������: "; cin >> size;//���� ������� �������
	A = new int[size];//��������� ������
	for (int i = 0; i < size; i++) {//���� �������������� ��� �������� �������
		A[i] = rand() % 21 - 10;//���������� �������� ��������� �������� �� -10 �� 10
		cout << A[i] << " ";
		if (A[i] <= min) {//���� ������� ������ ���� ����� ���������, ��
			min = A[i];//����������� ��������� �������� ��������
			LastIndexMin = i;//���������� ������ ��������
		}
		if (A[i] >= max) max = A[i];//���� ������� ������ ���� ����� ���������, �� ����������� ��������� �������� ��������
	}
	for (int i = 0; i < size; i++) {//���� �������������� ��� �������� �������
		if (A[i] == max) {//���� ������� ����� ���������, ��
			FirstIndexMAX = i;//���������� ������
			break;//��������� ����
		}
	}
	cout << endl << "����� ��������� ����� ������ ������������ � ��������� ������������ ����������: " << summ(A, LastIndexMin, FirstIndexMAX);//���������� ������� ��� ������ ����������
	return 0;
}

int summ(int* A, int x, int y) {
	int summ = 0;
	if (x > y) {//���� x ������ y, ��
		for (y += 1; x > y; y++) {//���� �� y � x
			summ += A[y];//���������
		}
	}
	else {//�����
		for (x += 1; y > x; x++) {//���� �� x � y
			summ += A[x];//���������
		}
	}
	return summ;//���������� ���������
}
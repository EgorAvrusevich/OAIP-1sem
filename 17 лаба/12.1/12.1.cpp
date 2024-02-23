#include <iostream>
#include <ctime>
using namespace std;

//������ ������� ��� �������� ���������� ������������� ��������� �� ������ ������
int findElements(int* A, int size, int count = 0) {
	for (int i = 1; i < size; i += 2) {
		if (A[i] < 0) {
			count++;
		}
	}
	cout << endl << "���������� ��������� ������� �� ������ ������: " << count;
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int size;
	cout << "������� ������ �������: "; cin >> size;//������ ������ �������
	int* A = new int[size];//�������� ������
	cout << "������: " << endl;
	//������ ���� ��� ������������ ��������� ������� ��������
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 21 - 10;
		cout << A[i] << " ";
	}
	findElements(A, size);//���������� �������
	delete[] A;//������������ ������
	return 0;
}
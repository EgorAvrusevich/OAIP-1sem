#include <iostream>
using namespace std;

//������ ������� ��� �������� �������� ��������� �� �������
int delNum(int* A, int size, int i) {
	for (int k = i; k < size; k++) {
		*(A + k) = *(A + k + 1);
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int size, * A;
	cout << "������� ������ �������: "; cin >> size;//������ ������ �������
	A = new int[size];//�������� ������
	cout << "������: " << endl;
	//���� ��� ������������ �������� ��������� �������
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 21 - 10;
		cout << A[i] << " ";
	}
	for (int i = 0; i < size; i++) {//���� ��� �������� �������� ���������
		if (A[i] % 2 == 1) {//���� ������� ������� �������� 
			delNum(A, size, i);//���������� �������
			i--;
			size--;
		}
	}
	cout << endl << "��������� ������: " << endl;
	//����� ���������� �������
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	delete[] A;//������� ������
	return 0;
}
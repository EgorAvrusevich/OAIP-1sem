#include <iostream>
using namespace std;

void matrix(int** A, int** B, int size);//������ ������ ��� ��������� ������

int main() {
	setlocale(LC_ALL, "russian");
	int** A, ** B, size;
	bool alright;
	cout << "������� ����������� ������: "; cin >> size;//������ ����������� ������
	A = new int*[size];//��������� ������
	B = new int*[size];
	cout << "������� �������� ������ �������: " << endl;
	//���� ��� ����� ������ ������ �������
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];//��������� ������
		for (int j = 0; j < size; j++) {
			cin >> A[i][j];
		}
	}
	cout << "������� �������� ������ �������: " << endl;
	//���� ��� ����� ������ ������ �������
	for (int i = 0; i < size; i++) {
		B[i] = new int[size];//��������� ������
		for (int j = 0; j < size; j++) {
	 		cin >> B[i][j];
		}
	}
	cout << "������ �������: " << endl;
	//���� ��� ������ ��������� ������ ������ �������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "������ �������: " << endl;
	//���� ��� ������ ��������� ������ ������ �������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	//���� ��� ����������� ���� �� � �������� ������������� ��������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (A[i][j] > 0 && B[i][j] > 0) {//���� ������� ������ � ������ ������� �������������, ��
				alright = true;//������� �������� ����� 1
			}
			else {//�����
				alright = false;//������ �������� ����� 0
				break;//��������� ����
			}
		}
		if (!alright) break;//���� ������ �������� ����� 0, �� ��������� ����
	}
	if (alright) {//���� ������ �������� ����� 1, ��
		cout << "��� ������� �� ����� ������������� ���������" << endl;
		cout << "��������� ��������� ������: " << endl;
		matrix(A, B, size);//���������� ������� ��� ������������ ������
	}
	else {//�����
		cout << "� �������� ���� ������������� ��������" << endl;//�����
	}
	//���� ��� ������� ������
	for (int i = 0; i < size; i++) {
		delete[] A[i];
		delete[] B[i];
	}
	delete[] A;//������� ������
	delete[] B;
	return 0;
}

void matrix(int** A, int** B, int size) {
	int** C;
	C = new int* [size];//��������� ������
	//���� ��� ������������ ������
	for (int i = 0; i < size; i++) {
		C[i] = new int[size];
		for (int j = 0; j < size; j++) {
			C[i][j] = 0;
			for (int k = 0; k < size; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//���� ��� ������ ������������ �������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++)
		delete[] C[i];//������� ������
	delete[] C;//������� ������
	return;
}
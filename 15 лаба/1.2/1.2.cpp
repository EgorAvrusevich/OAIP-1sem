#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int size, **A, column;
	bool plus;
	cout << "������� ������ ���������� ������� n = "; cin >> size;//����������� ����������� �������
	A = new int* [size];    //��������� �����.������
	cout << "������� �������� �������: " << endl;
	for (int i = 0; i < size; i++) {//���������� ���� ��� ��������� �����. ������ ������������� ����������������� �������
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			cin >> A[i][j];
	}
	cout << "�������� �������: " << endl;
		//������� �������� �������
	for (int** ptr = A; ptr < A + size; ptr++)
	{
		for (int* str = *ptr; str < *ptr + size; str++)
			cout << *str << " ";
		cout << endl;
	}
		//���������� � ����� ������ ��� �������� �������������
	for (int j = 0; j < size; j++) {//���������� �������
		for (int i = 0; i < size; i++) {//���������� ������
			if (A[i][j] < 0) {//���� ������� ������� ������ 0, ��
				plus = false;//������ �������� ����� 0
				break;//��������� ����
			}
			else {//�����
				plus = true;//������ �������� ����� 1
			}
		}
		if (plus = true) {//���� ������ �������� ����� 1, ��
			column = j;//����������� ���������� column �������� ����� �������
			break;//��������� ����
		}
	}
	for (int i = 0; i < size; i++) {//���������� ��� ������
		A[i][column - 1] *= -1;//����������� ���� ��������� ������ ������� ����� �������� � ������� ��� ����� 
	}
	cout << "�������� �������: " << endl;
		//������� �������� �������
	for (int** ptr = A; ptr < A + size; ptr++)
	{
		for (int* str = *ptr; str < *ptr + size; str++)
			cout << *str << " ";
		cout << endl;
	}
	for (int k = 0; k < size; k++) //������������ ������
		delete[] A[k];
	delete[] A;

}
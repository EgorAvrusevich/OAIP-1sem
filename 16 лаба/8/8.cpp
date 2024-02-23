#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void matrix();//������ ������� ��� ������� �������
void stroke();//������ ������� ��� ������� �������

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int choose;
	do {//������ ���� do while ���� choose �� ����� ����� 3
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� ���������� �������������, ������������� � ������� ��������� �������" << endl;
		cout << "2 - ����������� ���������� ���� � ������" << endl;
		cout << "3 - �����" << endl;
		cin >> choose;//������ choose 
		switch (choose) {//���������� switch ��� ������ ��������
		case 1:
			matrix();//���� choose ����� 1, �� ��������� ������� matrix
			break;//����� �����
		case 2:
			stroke();//���� choose ����� 2, �� ��������� �������� stroke
			break;//����� �����
		case 3:
			break;//���� choose ����� 3, �� ����� ����� � ����� ���������
		default: cout << "������, ������� ���������� �����";//��� ����� ������ �����, ����� ������
		}
	} while (choose != 3);
	return 0;
}


void matrix() {
	int** A, rows, columns, size, count_minus = 0, count_plus = 0, count_zero = 0;
	cout << "������� ���������� ����� � ������� = "; cin >> rows;//���� ���������� ����� �������
	cout << "������� ���������� �������� � ������� = "; cin >> columns;//���� ���������� �������� �������
	size = rows * columns;//������ ������� ����� ���������� ����� * ���������� ��������
	A = new int* [size];//��������� ������
	cout << "�������� �������: " << endl;
	for (int i = 0; i < rows; i++) {//���� ������������ ��� ������
		A[i] = new int[size];//��������� ������
		for (int j = 0; j < columns; j++) {//���� ������������ ��� �������
			A[i][j] = rand() % 21 - 10;//������������ �������� ���������� �������� �� -10 �� 10
			if (A[i][j] > 0) count_plus++;//���� ������� ������ ����, �� ����������� ��� � ������������� ��������
			else if (A[i][j] == 0) count_zero++;//���� ������� ����� ����, �� ���������� ��� � ������� ��������
			else if (A[i][j] < 0) count_minus++;//���� ������� ������ 0, �� ���������� ��� � ������������� ��������
			cout << A[i][j] << " ";//����� ��������
		}
		cout << endl;
	}
	cout << "���������� ������������� ����� = " << count_plus << endl;//����� ����������
	cout << "���������� ������� ����� = " << count_zero << endl;
	cout << "���������� ������������� ����� = " << count_minus << endl << endl;
	for (int k = 0; k < rows; k++)
		delete[] A[k];//������� ������
	delete[] A;//������� ������
	return;
}

void stroke() {
	string str;
	int word_count = 0;
	cin.ignore();//������� ������� �����
	getline(cin, str);//���� ������
	for (char& c : str) {//������������ ������ ������ ������
		if (c == ' ') word_count++;//���� ������ �������� �������� �� ����������� �����
	}
	cout << "���������� ����: " << word_count + 1 << endl << endl;//����� ����������
	return;
}
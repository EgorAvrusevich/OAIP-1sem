#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void stroke();//������ ������� ��� ������� �������
void matrix();//������ ������� ��� ������� �������

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int choose;
	do {//������ ���� do while ���� choose �� ����� ����� 3
		cout << "�������� �������" << endl;
		cout << "1 - ������ ���� ������������� �������� �� ������������� � �������� ������� �������" << endl;
		cout << "2 - ��������� ���� ���� � ���������� �����" << endl;
		cout << "3 - �����" << endl;
		cin >> choose;//������ choose 
		switch (choose) {//���������� switch ��� ������ ��������
		case 1: matrix();//���� choose ����� 1, �� ��������� ������� matrix
			break;//����� �����
		case 2: stroke();//���� choose ����� 2, �� ��������� �������� stroke
			break;//����� �����
		case 3: break;//���� choose ����� 3, �� ����� ����� � ����� ���������
		default: cout << "������, ������� ���������� �����";//��� ����� ������ �����, ����� ������
		}
	} while (choose != 3);
	return 0;
}

void matrix() {
	int** A, rows, columns, size;
	cout << "������� ���������� ����� � ������� = "; cin >> rows;//���� ���������� ����� �������
	cout << "������� ���������� �������� � ������� = "; cin >> columns;//���� ���������� �������� �������
	size = rows * columns;//������ ������� ����� ���������� ����� * ���������� ��������
	A = new int* [size];//��������� ������
	cout << "�������� �������: " << endl;
	for (int i = 0; i < rows; i++) {//���� ������������ ��� ������
		A[i] = new int[size];//��������� ������
		for (int j = 0; j < columns; j++) {//���� ������������ ��� �������
			A[i][j] = rand() % 21 - 10;//������������ �������� ���������� �������� �� -10 �� 10
			cout << A[i][j] << " ";//����� ��������
		}
		cout << endl;
	}
	cout << "��������� �������: " << endl;
	for (int i = 0; i < rows; i++) {//���� ������������ ��� ������
		for (int j = 0; j < columns; j++) {//���� ������������ ��� �������
			if (i % 2 == 0) cout << abs(A[i][j]) << " ";//���� ������ ��������, �� ����� �������� �� ������
			else cout << A[i][j] << " ";//����� ����� ��������
				}
				cout << endl;
			}
	cout << endl;
	for (int k = 0; k < rows; k++)
		delete[] A[k];//������� ������
	delete[] A;//������� ������
}

void stroke(){
	string str, edited;
	cout << "������� �����������: " << endl;
	cin.ignore();//������� ������� �����
	getline(cin, str);//������ ������
	bool capitalizeNext = true;//������ ������ ���������� ��� �����������, ����� �� ������ ��������� ������ � ������� ��������
	for (char& c : str) {//������ ���� ��� ��������� ������
		if (ispunct(c) || isspace(c)) {//���� �������� �������� ����� ��� ������, ��
			capitalizeNext = true;//capitalize = 1
			edited += c;//��������� ������
		}
		else if (capitalizeNext && islower(c)) {//����� ���� capitalize = 1 � ����� ������� ��������, ��
			edited += toupper(c);//��������� ������ �������� ��������
			capitalizeNext = false;//capitalize = 0
		}
		else if (!capitalizeNext && isupper(c)) {//����� ���� capitalize = 0 � ������ �������� ��������, ��
			edited += tolower(c);//��������� ������ �������� ��������
		}
		else edited += c;//����� ������ ��������� ������
	}
	cout << "��������� �����������: " << endl << edited << endl;//����� ����������
}
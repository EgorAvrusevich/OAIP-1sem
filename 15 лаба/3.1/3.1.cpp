#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int size, * A, max = -10, summ = 0, multi = 1, element;//������ ������
	cout << "������� ���������� ��������� �������: "; cin >> size;//����������� ���� ���������� �������� �������
	if (!(A = (int*)malloc(size * sizeof(int)))) {//��������� ������ � �������� ������ �� ��� �� �����
		cout << "������������ ������";
		return 0;
	}
		cout << "������: " << endl;
	for (int i = 0; i < size; i++) {//������� ���� ���������
		*(A + i) = rand() % 21 - 10;//������������ �������� ���������� �������� �� -10 �� 10
		cout << *(A + i) << " ";
		if (*(A + i) > max) {//���� ������� ������ ����������� �����, ��
			max = *(A + i);//����������� ������������� ����� �������� ����� ��������
			element = i;//���������� ����� ����� ��������
		}
	}
	for (int i = 0; i < element; i++) {//���������� ��� �������� �� �������������
		if (*(A + i) > 0) {//���� ������� ������ 0, ��
			summ += *(A + i);//���������
		}
		else if (*(A + i) < 0) {//���� ������� ������ 0, �� 
			multi *= *(A + i);//�����������
		}
	}
	cout << endl << "����� ������������� ��������� = " << summ << endl;//����� ����������
	cout << "������������ ������������� ��������� = " << multi;
	free(A);//������������ ������
	return 0;
}
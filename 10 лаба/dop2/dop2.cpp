#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	const int N = 100;														//������ ���������� ��� �������
	int A[N], i, doubles = 0, n;											//���� ������
	cout << "������� ���������� ��������� � �������: "; cin >> n;			//����������� ���������� ��������� � �������
	for (i = 0; i < n; i++) {												//��������� ���� ������� ��� ������� ��������� � �������
		cout << "������� " << i + 1 << " ������� �������: "; cin >> A[i];	//����� �������� ��������� �������
	}
	for (i = 0; i < n; i++) {												//��������� ���� ������� ��� ������� ��������� � �������
		if (A[i] == A[i + 1]) {												//���� ������� ������� ����� ���������� ��������, ��
			doubles = doubles + 1;											//������� ����
		}
	}
	cout << "���������� ��� � �������: " << doubles;						//����� ����������
}
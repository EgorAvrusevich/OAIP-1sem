#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, c, n, temp = 1;
	x = 1; c = 0;
	y = 0;
	cout << "������� ���������� �����"; cin >> n;
	cout << "������� ����� "; cin >> x;					//������ ������ 
	if (x > 0) {										//���������� ���� �����	
		y = 1;											//����������� ���������� y �������� ����� �����
	}
	else {
		y = -1;
	}
	z = y;												//����������� ���������� z �������� ����� ����� 
														//��� ��������� ��� �� ������ ������������ �����
	while (temp < n) {									//����� ����� while ����� ���������� ��������� ��� ����� 0
		cout << "������� ����� "; cin >> x;
		if (x > 0) {									//���������� ���� �����
			y = 1;
		}
		else
		{
			if (x < 0) {
				y = -1;
			}
		}
		if (z != y) {									//���������� �������� ����� �������� ����� � ����������
			c = c + 1;									//� ������ ����� ����� ��������� 1 � ����� ����� ����� 
			z = y;
		}
		temp = temp + 1;
	}
	cout << "���� �������� " << c << " ���(�)";			//������� ���������� ����� �����
}
#include <iostream>
using namespace std;
int main() {
	float a = 1.774, m = 5, x = 3, y, z;					//���� ������
	int c = 1;
	while (x <= 5) {										//������� ���� ��� � �� 3 �� 5 � ����� � 0.2
		y = sqrt(a + pow(m, 2) * pow(x, 2)) / (a + x) * m;	//����������
		if (abs(y) >= 1) {									//���������� ������� if ��� ������������
			z = pow(sin(y), 2);
		}
		else {
			z = y + 1;
		}
		cout << c << ":z = " << z << endl;					//����� ������
		c = c + 1;
		x = x + 0.2;										//��������� � � ���(0.2)
	}
}
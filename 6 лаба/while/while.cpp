#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	float c = 2.1, r = 4 * pow(10,-4), m = 7, j = 0, h, y;		//���� ������
	int x = 0;
	while (j <= 1.7)											//������ ���� while ��� ���������� ��������� ����������� ���������� ���
	{															
		h = (10 * r - j) / (pow(c, 2) + exp(-m));				
		y = (h * m - pow(j, 2) + pow((0.1 * c), 2));
		cout << x + 1 << ":h = " << h << endl;					//����� ���������� �����������
		cout << " :y = " << y << endl;
		j = j + 0.1;
		x = x + 1;
	}
}
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	float h, y, c = 2.1, r = 4 * pow(10,-4), m = 1, j[4] = {9,1.8,15,-3};
	int x, z;
	z = 1;
	for (x = 0; x < 4; x++) {										//������ ���� for ��� ���������� ��������� ����������� ���������� ���
		while (m <= 2) {											//������ ���� while ��� ���������� ��������� ����������� ���������� ���
			h = (10 * r - j[x]) / (pow(c, 2) + exp(-m));
			y = (h * m - pow(j[x], 2) + pow((0.1 * c), 2));			//���������� �� ��������
			cout << z << ":h = " << h << endl;						//����� ���������� �����������
			cout << " :y = " << y << endl;
			m = m + 0.5;
			z = z + 1;
		}
		m = 1;
	}
}
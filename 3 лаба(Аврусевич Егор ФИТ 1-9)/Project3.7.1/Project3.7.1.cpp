#include <iostream>
using namespace std;
//var 7
void main() {
	double x = 1.4, m = 6, z = 0.05e-5, y, w;     //����������� ������ ��� � ��������� ������
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	cout << w;                                    //������� ��������� ����������
}
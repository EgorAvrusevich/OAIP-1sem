#include <iostream>
using namespace std;
int main() {
	double a = 1, b = 3, x, h, s1 = 0, s2 = 0, S;													//���� ������
	int n = 200;																					//���� ���������� ������
	h = (b - a) / (2 * n);																			//������� ������
	x = a + 2 * h;																					//������� �
	for (int i = 0; i < n; i++) {																	//���������� ���� for
		s2 = s2 + (pow(x, 3) - 3);																	//��������� ������������� �������� �������
																									//� ���������� ��� � s1
		x = x + h;																					//���������� ������ � �
		s1 = s1 + (pow(x, 3) - 3);																	//��������� ������������� �������� �������
																									//� ���������� ��� � s2
		x = x + h;																					//���������� ������ � �
	}
	S = (h / 3) * ((pow(a, 3) - 3) + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3));	//������� ������� ������������ ��������
	cout << "S = " << S;																			//����� ����������
}
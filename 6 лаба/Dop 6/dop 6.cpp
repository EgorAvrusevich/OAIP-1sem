#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "russian");
	int x, n, y, l;
	x = 0; l = 0;
	n = 1;
	cout << "������� ����� �� �������� ���� ������� ����� 3 � 6: "; cin >> x;		//������ �����
	y = x;
	while (x > 9) {																	//� ������� ����� while ���������� 
																					//���������� ���� � ����� 
		n = n + 1;
		x = x / 10;
	}
	while (n != 0) {																//� ������� ����� while ����������� ������ �����
		l = y / pow(10,n-1);														//�������� �����
		l = l % 10;
		if (l != 3 && l != 6) {														//������ ������� ���������� �������� �����
			cout << l;																//������� ����� ���� ��� �� 3 ��� 6
		}
		n = n - 1;
	}
}
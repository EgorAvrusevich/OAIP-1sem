#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tmp[33];
	int A, n, p;

	cout << "������� ����� �: "; cin >> A;				//������ ������ 
	cout << "������� ���������� ����� n: "; cin >> n;
	cout << "������� �������� p: "; cin >> p;

	A |= ((1 << n) - 1) << (p - n);						//� ������� ������� �������� ��������� ����� � ����� �
	_itoa_s(A, tmp, 2);									//������������ ��������� � �������� ����
	cout << "���������: " << tmp << endl;				//������� ���������
}
#include <iostream>
using namespace std;

int main() {
	double a;
	setlocale(LC_CTYPE, "russian");
	cout << "������� ����� � = "; cin >> a;
	a = a * a;                                 // ������� ����� � � �������
	a = a * a;                                 // ������� ����� � � 4 �������
	cout << "� � 4 ������� = " << a;
}
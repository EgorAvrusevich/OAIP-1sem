#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tmp[33];
	int A, mask;

	cout << "������� ����� �: "; cin >> A;		//������ �����
	_itoa_s(A, tmp, 2);							//��������� ����� � �������� ���
	cout << "����� � � �������� ����: " << tmp << endl;
	if ((A & 1) == 0) {							//���������� ������� �������� ��� �������� ��������� �����,
												//� ����������� � ����������� ������� ��� ���������
		cout << "����� ������ 2";
	}
	else {
		cout << "����� �� ������ 2";
	}
	return 0;
}
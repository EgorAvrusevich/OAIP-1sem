#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];																//����� ����������� �������
	int A, maskA, number = 0;													//������ ������
	maskA = 0x1;																//������ ����� ...0001
	cout << "������� ����� � = "; cin >> A;										//����������� ����� �
	_itoa_s(A, tmp, 2);															//��������� ����� � � �������� ���
	cout<< "����� � �������� ����: " << tmp << endl << endl;					//������� ����� � �������� ����
	A = A >> 2;																	//����� ������ �� 2
	for (int i = 0; i < 11; i++) {												//��������� ���� 11 ���
		if ((A & maskA) == 0) {													//���� ��� ��������� ����� �������� 0, ��
			number = number + 1;												//�����������
		}
		A >>= 1;																//����� ������ �� 1
	}
	cout << "����� ����� � ����� ������� � �������� ���� �� 13 = " << number;	//����� ����������
}

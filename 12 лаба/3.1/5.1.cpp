#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	const int N = 100;
	int arr[N], n, arr1[N], arr2[N], x = 0, y = 0;						//���� ������
	float summ = 0;
	float *psumm;
	psumm = &summ;														//��������� ��������� �� n
	cout << "������� ���������� ��������� � ������� n = "; cin >> n;	//����������� ���������� ��������� 
	cout << "�������� �������: " << endl;
	for (int i = 0; i < n; i++) {										//������ ���� ����� ������ ������� �������� ������� ��������
		arr[i] = rand() % 100;											//����� �������� ��������� ����� �� 0 �� 99
		cout << arr[i] << " ";
		*psumm += arr[i];												//���������
	}
	*psumm = *psumm / n;												//������� ������� ��������������
	cout << endl << "������� �������������� = " << *psumm << endl;
	for (int i = 0; i < n; i++) {										//������ ���� ������������� ������� ������� ����� ���������
		if (arr[i] > *psumm) {											//���� ������� ������ �������� ��������������� ��,
			arr1[x] = arr[i];											//���������� ��� � ������ ������
			x++;
		}
		else {
			arr2[y] = arr[i];											//����� ���������� �� ������
			y++;
		}
	}
	cout << "�������� ������ �������� ���������������: " << endl;
	for (int i = 0; i < x; i++) {										//������ ���� ������������� ������� ��� ������� ��������� � ������ ������� 
		cout << arr1[i] << " ";											//����� ��������
	}
	cout << endl << "�������� ������ �������� ���������������: " << endl;
	for (int i = 0; i < y; i++) {										//������ ���� ������������� ������� ��� ������� ��������� �� ������ �������
		cout << arr2[i] << " ";											//����� ��������
	}
}
#include <iostream>
using namespace std;

//������ ������� ��� ���������� ������ ��������� ������� �� �������� ������
int findElements(int* A, int n) {
	cout << "������ ������ ��������, ������� �� �� ������ ������: ";
	for (int i = 0; i < n; i += 2) {
		if (A[i] % 2 == 0) {
			cout << i + 1 << " ";
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int size;
	cout << "������� ������ �������: "; cin >> size;//������ ������ �������
	cout << endl;
	int* A = new int[size];
	//����� �������� �������
	cout << "������� �������� �������: ";
	for (int i = 0; i < size; i++) cin >> A[i];
	findElements(A, size);//�������� �������
	delete[] A;//������� ������
	return 0;
}
#include <iostream>
using namespace std;

//������ ������� ��� ������ ������������� �������� � �������
int findMax(int** A, int n, int m, int& max, int& maxN, int& maxM, int& count) {
	max = A[0][0];
	count = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				maxN = i;
				maxM = m;
				count = 1;
			}
			else {
				if (A[i][j] == max) {
					count++;
				}
			}
		}
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "russian");
	int n, m;
	cout << "������ ������� �������: "; cin >> n >> m;//���� �������� �������
	int** A;
	A = new int* [n];//��������� ������
	cout << "������� �������� �������: ";
	//���� ��� ����� ��������� �������
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];//��������� ������
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	int max, maxN, maxM, count;
	findMax(A, n, m, max, maxN, maxM, count);//���������� �������
	//������� ��������� � ����������� �� �������
	if (count > 1) {
		cout << "������������ �����: " << max << endl;
		cout << "�������: [" << maxN << "][" << maxM << "]" << endl;
		cout << "���������� ����������: " << count << endl;
	}
	else {
		cout << "������������ ����� �� �����������." << endl;
	}
	//������� ������
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	return 0;
}
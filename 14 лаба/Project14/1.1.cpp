#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 6, M = 6;
	int A[N][M];
	int row = 0, column = 0, n, m, max = 0;		//������ ������
	cout << "������� ���������� ����� � ������� n = "; cin >> n;//������ ���������� ����� � �������
	cout << "������� ���������� �������� � ������� m = "; cin >> m;//������ ���������� �������� � �������
	for (int i = 0; i < n; i++) {//��������� ���� ������� ��� ������� ����� � �������
		for (int j = 0; j < m; j++) {//��������� ���� ������� ��� ������� �������� � �������
			cout << "������� ������� ������� [" << i + 1 << "," << j + 1 << "]"; cin >> A[i][j];//������ ������� �������
			if (max < A[i][j]) {//���� ������� ������� ������ ���������, ��
				row = j + 1;//����������� ���������� row ����� ������� + 1
				column = i + 1;//����������� ���������� column ����� ������ + 1
				max = A[i][j];//����������� ��������� �������� �������� �������
			}
		}
	}
	cout << " �������� �������:" << endl;
	for (int i = 0; i < n; i++)//��������� ���� ������� ��� ������� ����� � �������
	{
		cout << endl;
		for (int j = 0; j < m; j++)//��������� ���� ������� ��� ������� �������� � �������
			cout << "A[" << i + 1 << "," << j + 1 << "] = " << A[i][j] << " ";//������� ������
	}
	cout << endl;
	cout << "������������ ������� A[" << column << "," << row << "] = " << max << endl;//������� ������������ ������� �������
}

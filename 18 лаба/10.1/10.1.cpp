#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string A = "fileA.txt";

	ifstream file(A);//��������� ���� ��� ������
	if (!file.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << A;//����� ������
		return 0;//��������� ���������
	}

	int x;
	cout << "������� ����� x = "; cin >> x;//����������� x

	int n = 0, i = 0;
	int* arr = new int[100];//�������� ������ ��� �������

	//���������� ���� ��� �������� ���� ������ �� ����� � ������
	while (file >> arr[i]) {
		n++;//������� ���������� ��������� �������
		i++;
	}
	file.close();//��������� ����

	int clossestSum = INT_MAX;
	int num1, num2;
	//���� 2 ����� �������� �������������� ������� ����� ����� � x
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = (arr[i] + arr[j]) / 2;
			if (abs(sum - x) < abs(clossestSum - x)) {
				clossestSum = sum;
				num1 = arr[i];
				num2 = arr[j];
			}
		}
	}
	cout << "��� ����� �� �����, ������� �������������� ������� �������� ����� � x:" << endl << num1 << " " << num2;//������� ���������
	delete[] arr;//����������� ������
	return 0;
}
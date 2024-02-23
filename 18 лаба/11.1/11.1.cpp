#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string A = "fileA.txt";
	string B = "fileB.txt";
	ifstream inputFile(A);//��������� ���� ��� ������
	if (!inputFile.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << A;//����� ������
		return 0;//��������� ���������
	}

	ofstream outputFile(B);//��������� ���� ��� ��������������
	if (!outputFile.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << B;//����� ������
		return 0;//��������� ���������
	}

	int num, arrUnicNum[100], unicNum = 0;//������ ������ ��� �������� ���������� �����

	while (inputFile >> num) {//������������ ��� ������ �� ����� fileA
		bool dupl = false;//������ ������ ���������� ��� ����������� ������������ �����
		for (int i = 0; i < unicNum; i++) {//���� ��� �������� ���� ���������� �����
			if (num == arrUnicNum[i]) {//���� ����� �� ����� ����� �����������, ��
				dupl = true;//������ ���������� ����� 1
				break;//��������� �����
			}
		}
		if (!dupl) {//���� ������ ���������� ����� 0, ��
			arrUnicNum[unicNum] = num;//���������� ����� �� ����� � ������ � ����������� �������
			unicNum++;//�������������� ���������� ���������� �����
			outputFile << num << " ";//���� � ���� fileB ��� �����
		}
	}

	inputFile.close();//��������� ����
	outputFile.close();//��������� ����

	return 0;
}
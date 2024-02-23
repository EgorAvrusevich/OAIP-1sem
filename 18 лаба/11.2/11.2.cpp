#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string F1 = "F1.txt";
	string F2 = "F2.txt";

	ifstream inputFile(F1);//��������� ���� ��� ������
	if (!inputFile.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << F1;//����� ������
		return 0;//��������� ���������
	}

	ofstream outputFile(F2);//��������� ���� ��� ��������������
	if (!outputFile.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << F2;//����� ������
		return 0;//��������� ���������
	}

	string line;

	while (inputFile >> line) {//������������ ��� ������ �� ����� F1
		if (line.back() == 'a') {//���� � ����� ������ ��������� ������ �, ��
			outputFile << line << endl;//���������� ������ � ���� F2
		}
	}

	inputFile.close();//��������� ���� 
	outputFile.close();//��������� ����
	return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	string f = "f.txt";
	string g = "g.txt";
	int k;
	cout << "������� k = "; cin >> k;//������ ���������� k

	ifstream file(f);//��������� ���� ��� ������
	if (!file.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << f << endl;//�����
		return 0;//��������� ���������
	}

	ofstream outputFile(g);//������� ����� ��� ��������������
	if (!outputFile.is_open()) {//� ������ ������ ��������
		cout << "������ �������� �����: " << g << endl;//�����
		return 0;//��������� ���������
	}
	int num;
	while (file >> num) {//���������� ��� ������ �����
		if (num % k == 0) {//���� ����� ������ �, ��
			outputFile << num << " ";//���������� � ���� g
		}
	}
	file.close();//��������� ����
	outputFile.close();//��������� ����
	return 0;
}
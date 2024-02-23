#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	string A = "matrix.txt";
	string B = "result.txt";
	ifstream inputfile(A);//��������� ���� ��� ������
	if (!inputfile.is_open()) {//���� ��������� ������
		cout << "������ �������� �����: " << A;//�����
		return 0;//��������� ���������
	}
	
	ofstream outputFile(B);//��������� ���� ��� ��������������
	if (!outputFile.is_open()) {//���� ��������� ������
		cout << "������ �������� �����: " << B;//����� 
		return 0;//��������� ���������
	}

	vector<vector<int>> matrix;//������ �������
	int column;
	inputfile >> column;//���� �� ����� ���������� ��������

	int num;
	while(inputfile >> num){//������������ ��� ������ �� �����
		matrix.emplace_back();
		matrix.back().push_back(num);//��������� ������ ������� ������ �������
		for (int i = 1; i < column; i++) {
			inputfile >> num;//���� ��������� ������� �� �����
			matrix.back().push_back(num);//��������� ��������� ������� ������ �������
		}
	}
	outputFile << column << endl;//��������� � ���� ���������� �������� �������
	for (int i = 0; i < column; i++) {//���������� ��� ������ �������
		for (int j = 0; j < column; j++) {//���������� ��� ������� �������
			outputFile << matrix[j][i] << " ";//���������� � ���� ����������������� �������
		}
		outputFile << endl;
	}
	outputFile.close();//��������� ����
	inputfile.close();//��������� ����
	return 0;
}
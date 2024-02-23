#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string A = "nameA.txt";
	string B = "nameB.txt";
	string C = "nameC.txt";
	string D = "nameD.txt";
	
	ifstream inputFileA(A);//��������� ���� ��� ������
	if (!inputFileA.is_open()) {//���� ��������� ������
		cout << "������ �������� �����: " << A;//�����
		return 0;//��������� ���������
	}

 	ifstream inputFileB(B);//��������� ���� ��� ������
	if (!inputFileB.is_open()) {//���� ��������� ������
 		cout << "������ �������� �����: " << B;//�����
		return 0;//��������� ���������
	}

 	ifstream inputFileC(C);//��������� ���� ��� ������
	if (!inputFileA.is_open()) {//���� ��������� ������
 		cout << "������ �������� �����: " << C;//�����
		return 0;//��������� ���������
	}

	ofstream outputFileD(D);//��������� ���� ��� ��������������
	if (!outputFileD.is_open()) {//���� ��������� ������
 		cout << "������ �������� �����: " << D;//�����
		return 0;//��������� ���������
	}

	int numA, numB, numC;
	//������� �������� �� ������ A, B � � � ���� D
	while (inputFileA >> numA) {
 		inputFileB >> numB;
 		inputFileC >> numC;
		outputFileD << numA << " " << numB << " " << numC << " ";
	}
	//��������� �����
 	inputFileA.close();
 	inputFileB.close();
	inputFileC.close();
 	outputFileD.close();
}
#include <iostream>
#include <string>
using namespace std;

void findWordsWithEnding(const string& input,const string& ending){//������ ������� ��� ������ ���� � ����������
	setlocale(LC_ALL, "Russian");
	string word = "";//������ ���������� ��� �������� �����
	for (char c : input) {//������ ���� ��� ����������� �� ���� �������� ������
		if (c != ' ') {//���� ������ �� �������� ��������, ��������� ��� � �������� �����
			word += c;
		}
		else {//�����
			if (word.size() >= ending.size() && word.rfind(ending) == word.size() - ending.size()) {//�������� �������� �� ����� ���������
				cout << word << endl;//������� �����, ���� ��� �������� �������� ���������
			}
			word = "";//���������� ������� �����
		}
	}
	if (word.size() >= ending.size() && word.rfind(ending) == word.size() - ending.size()) {//��������� ��������� ����� ����� ���������� �����
		cout << word << endl;//������� ��������� �����, ���� ��� �������� ���������
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	string input;
	cout << "������� ������: ";
	getline(cin, input);//������ ������
	
	string ending;
	cout << "������� ���������: ";
	cin >> ending;//������ ���������
	
	findWordsWithEnding(input, ending);//���������� ������� ��� ������ ���� � ������ ����������
	
	return 0;
}
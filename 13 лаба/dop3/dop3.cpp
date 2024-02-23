#include <iostream>
#include <cstring>
using namespace std;

bool isWordEncountered(char word[][50], int numEncounteredWords, char* currentWord) {//������ ������� ��� ������ ���������� ����
	for (int i = 0; i < numEncounteredWords; i++) {//��������� ���� ������� ���, ������� ���������� ����
		if (strcmp(word[i], currentWord) == 0) {//���� ����� ��� �������� i ����� �������� �����, ��
			return true;	//������� 1
		}
	}
	return false;			//������� 0
}

int main() {
	setlocale(LC_ALL, "Russian");
	char sentence[] = "���� ���� ���� ���� ���� ����";										//������ ������
	char encounteredWords[50][50];
	int numEncounteredWords = 0;
	bool inWord = 0;
	char currentWord[50];
	int currentWordIndex = 0;

	for (int i = 0; i <= strlen(sentence); ++i) {//��������� ���� ������� ���, ������� �������� � ������
		char currentChar = sentence[i];//��������� ����������(������� ������) �������� ������ �������� � ������ ��� �������� i 
		if (currentChar == ' ' || currentChar == '\0') {//���� ������� ������ ����� 0 ��� ����� ������, ��
			currentWord[currentWordIndex] = '\0';//��������� ������� �����
			if (!isWordEncountered(encounteredWords, numEncounteredWords, currentWord)) {//���� �������� ������� ���������� 0, ��
				cout << currentWord << " ";//����� �������� �����
				strcpy_s(encounteredWords[numEncounteredWords], currentWord);
				++numEncounteredWords;//+ ���������� �����
			}
			currentWordIndex = 0;//���������� ������� ������ � �����
			inWord = false;
		}
		else {//����� ������� ����� ��������� � ��������� ������
			currentWord[currentWordIndex] = currentChar;//
			++currentWordIndex;//
			inWord = true;
		}
	}
	cout << endl;
	return 0;
}
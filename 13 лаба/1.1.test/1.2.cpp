#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char str[256];
	char* pstr;										//��������� �� ������
	int count = 0, length, digits = 0;
	cout << "������� ������: " << endl;
	gets_s(str);
	for (pstr = str; *pstr != '\0'; pstr++) {
		if (*pstr == ' ') {
			digits = 0;
		}
		else {
			digits++;
		}
		if (digits == 5 && str[(int)pstr+1] == ' ') {
			count++;
		}
	}
	cout << "���������� ����� � ����� ���������: " << count;//����� ����������
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string dict[] = { "house","esuoh","lil","ill" };//������ �������
	
	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++) {//� ������� ����� ������� ��� �����
		cout << dict[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++) {//�������� ���� ������� ��� ������� ���� � �������
		if (dict[i].size() == dict[i + 1].size()) {//���� ����� ���� ���������, ��
			sort(dict[i].begin(), dict[i].end());//��������� �����
			sort(dict[i + 1].begin(), dict[i + 1].end());
		}

		if (dict[i] == dict[i + 1]) {//���� ����� ����� ���������� �����, ��
			cout << "����� " << i << " ������� �� ��� �� ���� ��� � ����� " << i + 1 << endl;//������� ���������
		}
	}
	return 0;
}
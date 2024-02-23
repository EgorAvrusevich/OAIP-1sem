#include <iostream>
using namespace std;

int findMaxNotInSecondArray(int arr1[], int arr2[]) {   //������ ������� ������� ���������� ����������� ����� �� ������ 1, �������� ��� � ������ 2
    int max = arr1[0];
    for (int i = 0; i < 10; i++) {                      //������ ���� ������������� 10 ���
        if (arr1[i] > max) {                            //���� ����� � ������ 1 ������ �������������, ��
            bool found = false;                         //������ ������� ���������� ���������� �� ���������� �����
            for (int j = 0; j < 10; j++) {              //������ ���� ������������ 10 ���
                if (arr1[i] == arr2[j]) {               //���� ����� �� 1 ������ ���� � ������ 2, ��
                    found = true;                       //������� ���������� ����������� 1
                    break;                              //����������� ����
                }
            }
            if (!found) {                               //���� ������� �������� ����� 0, ��
                max = arr1[i];                          //����������� ��������� ��� �����
            }
        }
    }
    return max;                                         //���������� max
}

int main() {
    setlocale(LC_ALL, "");
    int array1[] = { 3, 7, 1, 9, 5, 11, 6, 4, 8, 2 };       //������ ������ 
    int array2[] = { 6, 11, 2, 4, 13, 15, 17, 19, 21, 23 };
    int result = findMaxNotInSecondArray(array1, array2);   //���������� ������� ��� ���� ��������
    cout << "���������� ����� �� ������� �������, ������� �� ������ �� ������: " << result << endl; //������� ���������
    return 0;
}
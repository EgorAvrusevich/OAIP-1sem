#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int x, y, z;
    cout << "������� ����� x = "; cin >> x;
    cout << "������� ����� y = "; cin >> y;         //������ ������
    cout << "������� ����� z = "; cin >> z;
    if ((x + y) % 5 == 0) {
        cout << "x + y = " << x + y << "  ������� �� 5";
    }
    if ((z + y) % 5 == 0) {
        cout << "z + y = " << z + y << "  ������� �� 5";
    }                                                               //�������� ������ ����� �� ������� �� 5
    if ((z + x) % 5 == 0) {
        cout << "z + x = " << z + x << "  ������� �� 5";
    }
    if ((x + y + z) % 5 == 0) {
        cout << "x + y + z = " << x + y + z << "  ������� �� 5";
    }
    if ((x + y + z) % 5 != 0 && (z + x) % 5 != 0 &&                 //� ������� ����� ������� ����� �� ���� �� ���� �� ������ �� 5
        (z + y) % 5 != 0 && (x + y) % 5 != 0) {                     //
        cout << "Error";                                            //������� "Error" � ������ ��������� ������� �������
    }
}
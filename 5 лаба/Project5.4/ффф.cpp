#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int x, y, z;
    cout << "Введите число x = "; cin >> x;
    cout << "Введите число y = "; cin >> y;         //Вводим данные
    cout << "Введите число z = "; cin >> z;
    if ((x + y) % 5 == 0) {
        cout << "x + y = " << x + y << "  Делится на 5";
    }
    if ((z + y) % 5 == 0) {
        cout << "z + y = " << z + y << "  Делится на 5";
    }                                                               //Проверям каждую сумму на деление на 5
    if ((z + x) % 5 == 0) {
        cout << "z + x = " << z + x << "  Делится на 5";
    }
    if ((x + y + z) % 5 == 0) {
        cout << "x + y + z = " << x + y + z << "  Делится на 5";
    }
    if ((x + y + z) % 5 != 0 && (z + x) % 5 != 0 &&                 //В условие водим вариант когда ни одна из сумм не делитя на 5
        (z + y) % 5 != 0 && (x + y) % 5 != 0) {                     //
        cout << "Error";                                            //Выводим "Error" в случае выполниня данного условия
    }
}
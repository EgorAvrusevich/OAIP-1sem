#include <iostream>
using namespace std;

int main() {
	double a;
	setlocale(LC_CTYPE, "russian");
	cout << "¬ведите число а = "; cin >> a;
	a = a * a;                                 // возведЄм число а в квадрат
	a = a * a;                                 // возведЄм число а в 4 степень
	cout << "а в 4 степени = " << a;
}
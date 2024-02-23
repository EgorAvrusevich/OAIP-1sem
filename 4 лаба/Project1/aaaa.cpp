#include <iomanip> 
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(20) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(13) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(13) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(20) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}

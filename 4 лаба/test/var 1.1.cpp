#include <iomanip> 
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(23) << setfill(c) << endl;
}

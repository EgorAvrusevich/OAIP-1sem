#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	int size, mult = 1, sum = 0, ** A;
	cout << "Enter size ";
	cin >> size;
	srand(time(0));
	A = new int* [size];    //выделение динам.пам€ти
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			A[i][j] = 1 + rand() % 10;
	}
	for (int** ptr = A; ptr < A + size; ptr++)
	{
		for (int* str = *ptr; str < *ptr + size; str++)
			cout << *str << " ";
		cout << endl;
	}
	cout << "sum: " << sum << endl;
	cout << "mult: " << mult << endl;
	for (int k = 0; k < size; k++) //освобождение пам€ти
		delete[] A[k];
	delete[] A;
}

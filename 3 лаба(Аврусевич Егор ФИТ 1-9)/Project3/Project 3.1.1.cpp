#include <iostream>
using namespace std;
/// <summary>
/// var 1
/// </summary>
void main() {
	double k = 4, x = 2e-4, a = 8.1, t, u;    //����������� ������ ��� � ��������� ������ 
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	cout << u;                                //������� ��������� ����������
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 5, 3, 7, 6, 8, 2 };
    int target = 4;

    if (count(begin(arr), end(arr), target) != 0) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int *ptr = &x;
    int **parptr = &ptr;

    cout << ptr << endl;
    cout << *(ptr) << endl;
    cout << *(&ptr) << endl;
    cout << &x << endl;
    cout << *(&x) << endl;
    cout << parptr << endl;
    cout << &parptr << endl;
    cout << *(&parptr) << endl;
    cout << *(parptr) << endl;
}
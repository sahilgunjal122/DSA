#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // Creation of Pointer
    int *ptr = &a;
    cout << "Address of a:" << ptr << endl;
    // Dereferencing of pointer
    cout << *ptr << endl;
    return 0;
}
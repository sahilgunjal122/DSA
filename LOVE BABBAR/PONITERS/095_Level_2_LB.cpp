#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // int *ptr = &arr[0];
    // cout << "Address of first Block:" << ptr << endl;

    // cout << *ptr << ":Value access through Pointer(dereferencing Operator)" << endl;
    // cout << "This is the address of ptr:" << &ptr << endl;

    // cout << "Gives the Base Address of the Array:" << arr << endl;

    // cout << "Another Way to Find Base Address:" << &arr << endl;

    // cout << "Dereferencing the Array:" << *arr + 1 << endl;
    // cout << "Dereferencing the Array:" << *(arr) + 1 << endl;
    // cout << "Dereferencing the Array:" << *(arr + 1) << endl;
    // cout << "Dereferencing the Array:" << *(arr + 2) << endl;

    // int i = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl; // Internally it resolves *(arr + i)

    int *p = arr;
    p = p + 2;

    cout << "The value at p:" << *p << endl;

    int size = sizeof(arr);
    cout << "Size:" << size << endl;

    return 0;
}
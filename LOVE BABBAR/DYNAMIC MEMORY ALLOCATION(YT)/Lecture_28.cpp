#include <iostream>
using namespace std;

int update(int &n)
{
    n++;
}

int maxsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int i = 5;
    // // Creation of Reference Varible
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << j << endl;

    // int n = 5;
    // cout << "Before:" << n << endl;
    // update(n);
    // cout << "After:" << n << endl;

    // Dynamic Memory Allocation

    char *ch = new char;
    *ch = 'A';
    cout << "Char:" << *ch << endl;

    delete ch;

    // Cerating varible size array
    int n;
    cout << "Size of Array:" << endl;
    cin >> n;

    // Variable size array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = maxsum(arr, n);
    cout << "Ans is " << ans << endl;

    delete[] arr;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Array Size:" << endl;
    cin >> n;

    // Creation of 2D Dynmaic Array

    int **arr = new int *[n];
    // Assign the array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    // Taking input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
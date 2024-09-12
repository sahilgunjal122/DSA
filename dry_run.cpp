#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{

    vector<int> arr{10, 45, 36, 58, 30};
    int n = 5;

    merge(arr, n);

    return 0;
}
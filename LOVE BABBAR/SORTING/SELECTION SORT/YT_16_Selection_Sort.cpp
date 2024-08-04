#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[j], arr[i]);
            }
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr{2, 10, 4, 6, 4};
    int n = 5;
    bubbleSort(arr, n);

    return 0;
}

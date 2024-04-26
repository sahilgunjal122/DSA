#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximum(vector<int> arr)
{
    int max = INT8_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minimum(vector<int> arr)
{
    int min = INT8_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void first_last(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (start > end)
            break;

        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
    }
}

void reverseeeeee(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (arr[start] < arr[end])
        {
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
        start++;
        end--;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr{10, 20, 40, 60, 3, 367};
    int ans1, ans2;
    ans1 = maximum(arr);
    ans2 = minimum(arr);
    cout << "The Maximum Number is:" << ans1 << endl;
    cout << "The Minimum Number is:" << ans2 << endl;

    cout << "This is First Last:" << endl;
    first_last(arr);
    cout << endl;
    cout << "This is Reverse" << endl;
    reverseeeeee(arr);
    // printttttt(arr);

    return 0;
}
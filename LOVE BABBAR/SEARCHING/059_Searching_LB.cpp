#include <bits/stdc++.h>
using namespace std;

// 1.Pivot Element In Rotated & Sorted Array
int pivot_element(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end)
        {
            return start;
        }

        if (mid + 1 <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
        {
            end = mid + 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

// 2.Square Root of a Number using Binary Search

int squreroot(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else
        {
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// 3.Find Element in 2D Array

int binarysearch(int arr[][4], int rows, int cols, int target)
{
    int s = 0;
    int e = rows * cols - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int rowindex = mid / cols;
        int colsindex = mid % cols;

        if (arr[rowindex][colsindex] == target)
        {
            return true;
        }
        if (arr[rowindex][colsindex] < target)
        {
            // search right
            s = mid + 1;
        }
        else
        {
            // search left
            e = mid - 1;
        }
    }
    return false;
}

int main()
{
    // 1.Pivot Element In Rotated & Sorted Array
    // vector<int> arr{2, 4, 6, 8, 9, 10};
    // int ans = pivot_element(arr);
    // if (ans == -1)
    // {
    //     cout << "kuch to gadbad hai" << endl;
    // }
    // else
    // {
    //     cout << "Ans at Index " << ans << endl;
    //     cout << "The Pivot Element is " << arr[ans] << endl;
    // }

    // 2.Square Root of a Number using Binary Search
    // int n;
    // cout << "Enter Number:";
    // cin >> n;

    // int ans = squreroot(n);
    // cout << "The Square Root of " << n << " : " << ans << endl;

    // int precision;
    // cout << "Enter How many Digits you want:";
    // cin >> precision;

    // double finalans = ans;
    // double step = 0.1;

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalans; j * j <= n; j = j + step)
    //     {
    //         finalans = j;
    //     }
    //     step = step / 10;
    // }

    // cout << "Final Ans is: " << finalans << endl;

    // 3.Finding Element in 2D array

    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};

    int rows = 5;
    int cols = 4;

    int target = 15;

    bool ans = binarysearch(arr, rows, cols, target);

    if (ans == true)
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Number Not Found";
    }

    return 0;
}
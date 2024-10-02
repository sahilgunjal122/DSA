#include <bits/stdc++.h>
using namespace std;

int util(int *p)
{
    // p = p + 1; //creates a cpoy of pointer & make changes in it.
    *p = *p + 1; // It will access the number in the pointer
}

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;
    // cout << **q << endl;

    cout << "Before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    util(p);
    cout << endl;
    cout << "After" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}
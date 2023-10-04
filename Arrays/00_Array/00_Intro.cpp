#include <bits/stdc++.h>
using namespace std;

int main()
{

    //  Array creation

    // int arr[101];
    // char ch[102];
    // bool flag[223];
    // long lnum[900];
    // short snum[100];
    // cout << "Array Created Successfully..." << endl;

    // int a = 5;
    // cout << "Address of a is : " << &a << endl;
    // cout << "Size of a is : " << sizeof(a) << endl;
    // cout << endl;

    // int arr[10];
    // cout << "Base Address of arr is : " << &arr << endl;
    // cout << "Base Address of arr is : " << arr << endl;
    // cout << "Size of Arr is : " << sizeof(arr) << endl;
    // cout << endl;

    // // Array Init

    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int brr[5] = {1, 2, 3, 4, 5};
    // int crr[6] = {1, 2};

    // int drr[2] = {1, 2, 3, 4, 5}; //Error

    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // printing using loop
    // int n = 5; // size of array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Taking input

    int brr[5];
    int n = 5;

    // cout << "Enter the elements in Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of index : " << i << " :- ";
        cin >> brr[i];
    }
    cout << endl;

    // printing
    // cout << "Elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << "You entered value at index : " << i << " is :- ";
        cout << brr[i] << endl;
    }
    cout << endl;
}
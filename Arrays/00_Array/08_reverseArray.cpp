#include <bits/stdc++.h>
using namespace std;

// Reverse Array
void reverseArray(int arr[], int n)
{

    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // printing array
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr[i] << " ";
    // }
}

// printing Array
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = 11;

    cout << "Printing Before Reverse : ";
    printArray(arr, size);
    cout << endl;

    // calling function
    reverseArray(arr, size);
    cout << "Printing After Reverse : ";
    printArray(arr, size);
    cout << endl;
}
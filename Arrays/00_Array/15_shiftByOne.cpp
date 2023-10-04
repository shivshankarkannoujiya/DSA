#include <bits/stdc++.h>
using namespace std;

void rightShiftByOne(int arr[], int n)
{

    int temp = arr[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// left shift

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    cout << "Right Shift by 1 : " << endl;
    cout << endl;

    // calling function
    rightShiftByOne(arr, n);
    cout << endl;
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // creating array of size 10;
    int arr[10];
    int n = 10;

    // taking input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Printing Array Before Doubling value ..." << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // doubling the value of the array

    for (int i = 0; i < n; i++)
    {

        arr[i] = arr[i] * 2;
    }

    // printing the array

    cout << endl;
    cout << "Printing Array after Doubling ..." << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}
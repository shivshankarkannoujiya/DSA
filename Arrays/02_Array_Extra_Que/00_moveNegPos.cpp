#include <bits/stdc++.h>
using namespace std;

// Using while loop
void shiftZeros(int arr[], int n)
{

    int index = 0;
    int j = 0;
    while (index < n)
    {

        if (arr[index] < 0)
        {

            swap(arr[index], arr[j]);
            j++;
        }

        // Agar +ve no hoga then move only index aage
        index++;
    }
}

// using for loop
 
void moveZerosLeft(int arr[], int n)
{

    int j = 0;
    for (int index = 0; index < n; index++)
    {

        if (arr[index] < 0)
        {

            swap(arr[index], arr[j]);
            j++;
        }
    }
}

// print array

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;

    cout << "Printing Array Before shifting ......." << endl
         << endl;
    printArray(arr, n);
    cout << endl;

    // shifting
    // moveZerosLeft(arr, n);
    shiftZeros(arr, n);
    cout << "Printing Array After shifting ......." << endl
         << endl;
    printArray(arr, n);
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// printing function
void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

// sortZeroOne
void sortZeroOne(int arr[], int n)
{

    int zeroCount = 0;
    int oneCount = 0;

    // count zeos
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {

            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // // step 2
    // // place zeros
    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }

    // // step 3
    // cout << "Now value of i is : " << i << endl;
    // for (int j = i; j < n; j++)
    // {

    //     arr[j] = 1;
    // }

    // using while loop
    int index = 0;
    while (zeroCount--)
    {

        arr[index] = 0;
        index++;
    }

    cout << "Value of index is : " << index << endl;
    cout << endl;
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 0, 0, 0, 0};
    int n = 9;

    // printing array
    printArr(arr, n);
    cout << endl;

    // calling function
    cout << endl;
    sortZeroOne(arr, n);
    printArr(arr, n);
    cout << endl;
    cout << endl;

    return 0;
}
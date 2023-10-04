#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // calling function
    printArray(arr, size);
    cout << endl;
    cout << endl;

    return 0;
}
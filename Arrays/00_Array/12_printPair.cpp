#include <bits/stdc++.h>
using namespace std;

// 1

void printPair(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "Printing pair for i =  " << i << endl;
        cout << endl;
        for (int j = 0; j < size; j++)
        {
            cout << " { " << arr[i] << "," << arr[j] << " } ";
        }

        cout << endl;
    }
}

// 2
void printPair2(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "Printing pair for i =  " << i << endl;
        cout << endl;
        for (int j = i; j < size; j++)
        {
            cout << " { " << arr[i] << "," << arr[j] << " } ";
        }

        cout << endl;
    }
}

int main()
{

    int array[] = {10, 20, 30};
    int size = 3;

    // function call
    printPair(array, size);
    cout << endl;

    // calling function 2
    cout << "Printing Another...";
    cout << endl;
    printPair2(array, size);
    cout << endl;
}
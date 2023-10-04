#include <bits/stdc++.h>
using namespace std;

// Printing Array row wise
void printArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// col wise printing

void printArr(int arr[][3], int row, int col)
{

    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // create array
    //  int arr[3][4];

    // array init
    // 1
    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // 2

    // int brr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // int row = 3;
    // int col = 4;

    // Printing Array

    // cout << endl;
    // cout << "Printing Array Row - wise ......." << endl;
    // cout << endl;

    // calling function
    // printArray(brr, row, col);
    // cout << endl;
    // cout << endl;

    // cout << endl;
    // cout << "Printing Array Col - wise ......." << endl;
    // cout << endl;

    // calling function
    // printArr(brr, row, col);
    // cout << endl;
    // cout << endl;

    // row wise

    cout << endl;
    cout << "Taking user input  Row - Wise ......." << endl;
    cout << endl;

    int arr[3][3];
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element at index"
                 << " { " << i << " , " << j << " } "
                 << " : ";
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << "Printing Array Row - wise ......." << endl;
    cout << endl;

    printArray(arr, row, col);
    cout << endl;
    cout << endl;

    // col wise

    cout << endl;
    cout << "Taking user input  Col - Wise ......." << endl;
    cout << endl;

    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {
            cout << "Enter element at index"
                 << " { " << j << " , " << i << " } "
                 << " : ";
            cin >> arr[j][i];
        }
        cout << endl;
    }

    cout << endl;
    cout << "Printing Array Col - wise ......." << endl;
    cout << endl;

    printArray(arr, row, col);
    cout << endl;
    cout << endl;
}

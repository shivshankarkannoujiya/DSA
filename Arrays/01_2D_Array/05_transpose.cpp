#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = i; j < col; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][4], int row, int col)
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

int main()
{

    int arr[4][4] = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int row = 4;
    int col = 4;

    // printing array
    cout << endl;
    cout << "printing Array Before Transpose ......." << endl
         << endl;
    printArray(arr, row, col);
    cout << endl;

    cout << endl;
    cout << "Doing Transpose ......." << endl;
    transposeMatrix(arr, row, col);
    cout << endl;

    cout << endl;
    cout << "printing Array After Transpose ......." << endl
         << endl;
    printArray(arr, row, col);
    cout << endl;

    vector<int> v;
    cout << "Size is : " << v.size() << endl;

    return 0;
}
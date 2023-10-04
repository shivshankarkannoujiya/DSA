#include <bits/stdc++.h>
using namespace std;

void printDiagonalSum(int arr[][4], int row, int col)
{

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    cout << "Diagonal sum is : " << sum;
}

// print diagonal
void printDiagonal(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        cout << arr[i][i] << " ";
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

    cout << "Printing Diagonal Sum ......." << endl;
    cout << endl;
    printDiagonalSum(arr, row, col);
    cout << endl;
    cout << endl;

    cout << "Printing Diagonal ......." << endl;
    cout << endl;
    printDiagonal(arr, row, col);
    cout << endl;
    cout << endl;

    return 0;
}
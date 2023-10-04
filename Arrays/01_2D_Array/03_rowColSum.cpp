#include <bits/stdc++.h>
using namespace std;

// row sum

void rowSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        int sum = 0;
        for (int j = 0; j < col; j++)
        {

            sum += arr[i][j];
        }
        cout << "Sum of Row - " << i << " is : " << sum << endl;
    }
}

// col sum

void colSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {

            sum += arr[j][i];
        }
        cout << "Sum of Col - " << i << " is : " << sum << endl;
    }
}

int main()
{

    int arr[3][4] = {

        {2, 4, 6, 8},
        {10, 12, 14, 16},
        {18, 20, 22, 24},
    };

    int row = 3;
    int col = 4;

    // calling function
    cout << "Printing Row - Sum ......." << endl;
    cout << endl;
    rowSum(arr, row, col);
    cout << endl;

    cout << "Printing Row - Sum ......." << endl;
    cout << endl;
    colSum(arr, row, col);
    cout << endl;

    return 0;
}
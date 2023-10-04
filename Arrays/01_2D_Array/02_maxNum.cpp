#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[][3], int row, int col)
{

    int maxAns = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] > maxAns)
            {

                // update max
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

// Min Number

int getMin(int arr[3][3], int row, int col)
{

    int minAns = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] < minAns)
            {

                // update min
                minAns = arr[i][j];
            }
        }
    }

    return minAns;
}

int main()
{

    int arr[3][3] = {

        {10, 20, 30},
        {50, 80, 90},
        {40, 110, 12},

    };

    int row = 3;
    int col = 3;

    // calling function
    // Max Number
    int maxNum = getMax(arr, row, col);
    cout << "Max in Array is : " << maxNum << endl;
    cout << endl;
    cout << endl;

    // Min Number
    int minNum = getMin(arr, row, col);
    cout << "Min in Array is : " << minNum << endl;
    cout << endl;
    cout << endl;

    return 0;
}
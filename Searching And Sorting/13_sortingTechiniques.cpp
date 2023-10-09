#include <bits/stdc++.h>
using namespace std;

// Print Array

void printArrya(vector<int> &arr)
{

    for (auto it : arr)
    {
        cout << it << " ";
    }
}

// 1 selection Sort

void selectionSort(vector<int> &arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{

    vector<int> arr = {5, 4, 2, 1, 3};
    int n = arr.size();

    // calling function
    selectionSort(arr, n);
    printArrya(arr);
}
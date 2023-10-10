#include <bits/stdc++.h>
using namespace std;

// Printing Array

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
    // Rounds : N-1
    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;
        // Index  of min element
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

// 2 Bubble Sort

void bubbleSort(vector<int> &arr, int n)
{

    for (int round = 1; round < n; round++)
    {
        bool swapped = false;

        for (int j = 0; j < n - round; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }

        // Agar swap nhi hua mean
        //  Sort ho chuka
        if (swapped == false)
        {
            break;
        }
    }
}

// 3 Insertion Sort

void insertionSort(vector<int> &arr, int n)
{
    for (int round = 1; round < n; round++)
    {

        // 1 fetch
        int val = arr[round];

        // 2 compare
        int j;
        for (j = round - 1; j >= 0; j--)
        {

            if (arr[j] > val)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // val bada rhega then nothing to do
                // stop
                break;
            }
        }

        // after shifting all elements copy
        arr[j + 1] = val;
    }
}

int main()
{

    vector<int> arr = {5, 4, 2, 1, 3};
    int n = arr.size();

    // calling function 1
    selectionSort(arr, n);
    printArrya(arr);
    cout << endl;

    // calling function 2
    bubbleSort(arr, n);
    printArrya(arr);
    cout << endl;

    // calling function 3
    insertionSort(arr, n);
    printArrya(arr);
    cout << endl;
}
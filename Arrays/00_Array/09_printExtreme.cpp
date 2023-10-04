#include <bits/stdc++.h>
using namespace std;

void printExtreme(int arr[], int n)
{

    int left = 0;
    int right = n - 1;
    while (left <= right)
    {

        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {

            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }

        left++;
        right--;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 40, 60};
    int size = 6;
    // int arr[] = {10, 20, 30, 40, 40};
    // int size = 5;

    printExtreme(arr, size);
}
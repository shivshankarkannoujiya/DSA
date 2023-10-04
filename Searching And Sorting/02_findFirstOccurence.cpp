#include <bits/stdc++.h>
using namespace std;

int findFirstOccurence(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == target)
        {

            // STORE
            ans = mid;

            // GO TO LEFT

            end = mid - 1;
        }
        else if (target > arr[mid])
        {

            // goto right
            start = mid + 1;
        }
        else
        {

            // goto left
            end = mid - 1;
        }

        // After 1 iteration update mid
        // bcz , array being samll after each iteration
        mid = (start + end) / 2;
    }

    // return mid
    return ans;
}

int main()
{

    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50};
    int n = 8;

    int target;
    cout << "Enter the Target : ";
    cin >> target;

    // calling function
    int ansIndex = findFirstOccurence(arr, n, target);

    if (ansIndex == -1)
    {
        cout << "Element Not Found !!!" << endl;
    }
    else
    {
        cout << "First Occurence is at Index : " << ansIndex << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int findPivotIndex(vector<int> &arr, int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        // 1 :-  if single element
        if (start == end)
        {
            return start;
        }

        // 2 :- Case where the pattern Breaks
        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[start] > arr[mid])
        { // we are at line B

            // goto left
            end = mid - 1;
        }
        else
        { // we are at line A

            // goto right
            start = mid + 1;
        }

        // update mid
        mid = start + (end - start) / 2;
    }

    // Agar nhi mila then
    return -1;
}

int main()
{

    vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
    int n = arr.size();

    // calling function
    int pivotIndex = findPivotIndex(arr, n);
    cout << "Pivot_Index is : " << pivotIndex << endl;
}
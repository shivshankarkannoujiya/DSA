#include <bits/stdc++.h>
using namespace std;

int findOddOccuringElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        // Case:1 :- Single element
        if (start == end)
        {
            return start;
        }

        // Case 2 :- mid : Odd [mid&1] --> ture : odd
        if (mid & 1)
        {
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {

                // we are at left side
                //  goto right side
                start = mid + 1;
            }
            else
            {

                // goto left
                end = mid - 1;
            }
        }

        // Case 3 :- mid : Even
        else
        {
            if (mid + 1 <= n && arr[mid] == arr[mid + 1])
            {
                // we are at left side
                //  goto right side
                start = mid + 2;
            }
            else
            {
                // Either we are at [Right part] or at [Ans]
                // that's why
                // end = mid-1 :- Ans lost ho skta hai
                end = mid;
            }
        }

        // updat emid
        mid = start + (end - start) / 2;
    }

    // not found
    return -1;
}

int main()
{

    int arr[] = {10, 10, 2, 2, 5, 5, 2, 5, 5, 20, 20, 11, 11, 10, 10};
    int n = 15;

    // calling function
    int ansIndex = findOddOccuringElement(arr, n);
    cout << "Odd Occuring Element is : " << arr[ansIndex] << endl;
}
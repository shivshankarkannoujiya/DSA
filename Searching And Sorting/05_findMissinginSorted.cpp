#include <bits/stdc++.h>
using namespace std;

int findMissingElement(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        // 1 find difference
        int difference = arr[mid] - mid;
        if (difference == 1)
        {

            // goto right
            start = mid + 1;
        }
        else
        {
            // 1 Store in Ans
            //  arr[mid] or mid
            ans = arr[mid];
            end = mid - 1;
        }

        // update mid
        mid = start + (end - start) / 2;
    }

    if (ans == -1)
    {

        return n + 1;
    }

    int finalAns = ans - 1;
    return finalAns;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    // calling function
    int missingNumber = findMissingElement(arr, n);
    cout << "Missing Number is : " << missingNumber << endl;
    return 0;
}
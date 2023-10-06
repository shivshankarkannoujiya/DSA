#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{

    int start = 0;
    int end = x;
    long long int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        // 1 Agar mid hi ans ho then
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // 1 Store
            // 2 goto right

            ans = mid;
            start = mid + 1;
        }
        else
        {
            // goto left
            end = mid - 1;
        }

        // update mid
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{

    int n;
    cout << "Enter the NUmber : ";
    cin >> n;

    // calling function

    int Sqrt = mySqrt(n);
    cout << "Square-Root  is : " << Sqrt << endl;
}
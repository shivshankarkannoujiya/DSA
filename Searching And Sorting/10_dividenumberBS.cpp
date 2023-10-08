#include <bits/stdc++.h>
using namespace std;

int getQuotient(int dividend, int divisor)
{

    int start = 0;
    int end = dividend;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // case 1
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            //    1 store
            ans = mid;

            // 2 got to right
            start = mid + 1;
        }
        else
        {

            // goto left
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

    int dividend;
    int divisor;
    cout << "Enter Dividend  : ";
    cin >> dividend;
    cout << "Enter Divisor : ";
    cin >> divisor;

    // calling function
    // Send abolute value for -ve cases
    int Quotient = getQuotient(abs(dividend), abs(divisor));

    // check the sign which have to apply
    // only for -ve bcz always returning +ve ans
    if ((dividend > 0 && divisor < 0 || dividend < 0 && divisor > 0))
    {

        Quotient = 0 - Quotient;
    }

    cout << "Quotient after dividing : " << Quotient << endl;
}
#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global variable

void fun()
{

    int x = 90;
    cout << x << endl;
    ::x = 100;
    cout << " global inside fun : " << ::x << endl;
}

int main()
{

    x = 3;                                   // accessing global variable
    int x = 50;                              // local to main()
    cout << "value of x is : " << x << endl; // Ans : 50 (most local var will print)

    // printing global varible
    cout << "Printing global var : " << ::x << endl;

    {
        int x = 40;
        cout << x << endl;
        cout << "Printing global var : " << ::x << endl;
    }

    // calling function
    fun();

    {
        int x = 12;
        {

            int x = 0;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }
}
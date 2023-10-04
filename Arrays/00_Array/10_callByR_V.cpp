#include <bits/stdc++.h>
using namespace std;

// void increseByOne(int n)
// {

//     // n = n + 1;
//     n++;
//     cout << "Value inside function : " << n << endl;

// }

void passByRef(int &n)
{

    n++;
    cout << "Value inside function : " << n << endl;
}

int main()
{

    // n --> Normal interger variable
    // int n = 5;
    // int &k = n;
    // int &c = n;

    // k,c --> reference variable
    // cout << "n : " << n << endl;
    // cout << "k : " << k << endl; // nick name given to n...
    // cout << "c : " << c << endl; // nick name given to n...

    // k++;
    // k = n + 1;
    // k = 90;
    // k = k + 1;
    // cout << " k is : " << k << endl;
    // cout << " n is : " << n << endl;
    // cout << " c is : " << c << endl;

    int n;
    cout << "Enter value of n : ";
    cin >> n;

    // int value = increseByOne(n);
    // cout << "Value is : " << value;

    // calling function
    // increseByOne(n);

    passByRef(n);
    cout << "Value of n  inside main is : " << n << endl;
}
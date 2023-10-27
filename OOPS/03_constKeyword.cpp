#include <bits/stdc++.h>
using namespace std;

int main()
{
    // const int x = 10; // x is constant
    // cout << x << endl;
    //  x = 20; // can not change it will give error

    // change the const var
    // int *p = &x;
    // *p = 30; //works in old compiler

    /*
    ! const with pointer
    */

    // int *a = new int;
    // *a = 2;
    // cout << "Value of *a is : " << *a << endl;
    // int b = 5;
    // a = &b;
    // cout << "Again Value of *a is : " << *a << endl;

    /*
    ! // const data , non-const pointer
    */
    // const int *a = new int(2);
    //  int const *a = new int(2); //we can write
    // cout << *a << endl;
    // *a = 20; we can not reassign data

    // can reassign pointer
    // int b = 20;
    // a = &b;
    // cout << *a << endl;

    /*
    ! const pointer , non-const data
    */

    // int *const a = new int(10);
    // cout << *a << endl;

    // can chagee the data
    // *a = 23;
    // cout << *a << endl;

    // can not change the pointer
    // int b = 24;
    // a = &b; // will give the error

    /*
    ! const pointer , const data
    */

    // const int *const a = new int(23);
    // cout << *a << endl;

    // can not change the data
    //*a = 45; // will give error

    // can not change the pointer
    // int b = 23;
    // a = &b; will give error
}
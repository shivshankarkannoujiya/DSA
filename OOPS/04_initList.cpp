#include <bits/stdc++.h>
using namespace std;

class abc
{

    int a;
    int b;
    const int c;

    // ctor : old style

    /*

     abc(int _a, int _b, int _c)
    {

        a = _a;
        b = _b;
        c = _c; //const c : can not reinit using old style ctor
    }

    */

    // ctor : Modern way (initialization list)
    // const c : can init using init list
    // abc(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}

    abc(int _a, int _b, int _c) : a(_a), b(_b), c(_c)
    {

        cout << "Inside the init list" << endl;
        a = _a * 10;
        // c = _c; // can not re-init const variable
    }
};

int main()
{

    return 0;
}
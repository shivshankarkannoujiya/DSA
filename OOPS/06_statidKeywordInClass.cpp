#include <bits/stdc++.h>
using namespace std;

class abc
{

public:
    int x;
    int y;

    void print() const
    {

        cout << x << " " << y << endl;
        // this : hidden parameter related to particulat instance
        cout << this->x << " " << this->y << endl; // both are same
    }
};

class def
{

public:
    // static int x, y;
    int x, y;
    // void print() const
    // {
    //     cout << x << " " << y << endl;
    // }

    static void print()
    {
        // No this pinter accessible
        // cout << x << " " << y << endl; //can not allcate non-static var
        // printf("I am in Static %s\n ", __FUNCTION__);
        cout << "I am in Static " << __FUNCTION__ << endl;
    }
};

// int def::x;
// int def::y;

int main()
{

    // Creating instance/object
    // abc obj1;
    // obj1.x = 1;
    // obj1.y = 2;
    // obj1.print();

    // abc obj2;
    // obj2.x = 3;
    // obj2.y = 4;
    // obj2.print();

    // In short :

    // abc obj1 = {1, 2};
    // obj1.print();
    // abc obj2 = {3, 4};
    // obj2.print();

    // def obj1 = {1, 2};  // will give error
    // def obj2 = {3, 4};  // will give error

    def obj1;
    // obj1.x = 1;
    // def::x = 1; can write
    // obj1.y = 2;
    // obj1.print();

    // def::x = 1;
    // def::y = 2;
    def::print();

    def obj2;
    // obj2.x = 10;
    // obj2.y = 20;
    // obj1.print();
    // obj2.print();

    // def::x = 10;
    // def::y = 20;
    def::print();
    def::print();
}
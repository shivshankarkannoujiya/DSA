#include <bits/stdc++.h>
using namespace std;

class Student
{

    // Property : state/Attribute
    int id;
    int age;
    string name;
    int noS;

    // behaviour : method/function
    void study()
    {

        cout << "Studying" << endl;
    }
    void bunk()
    {

        cout << "Bunking the class" << endl;
    }
};

// empty class
class Animal
{
};

class Computer
{
    // int quantity;
    double a;
    double b;
    char c;
    // bool y;
    // char d;

    void study()
    {
        int a; // No effect on size of Computer class
        cout << "Studying" << endl;
    }
};

// string is also a class
// if we put string in a class then size of that class

class Test
{
    string name;
    int age;
    bool prresent;
    int id;
    int noS;
};

int main()
{
    /*
    Have to print the students names,id's,nos etc..
    int id1, id2;
    string name1, name2;
    int age1, age2;
    int noS1, noS2;
    int marks[5], marks[5];
    */

    Student s1;
    Student s2;
    cout << "Printing Size of Empty class   : " << sizeof(Animal) << endl;
    cout << "Printing size of Non-Empty class :  " << sizeof(Computer) << endl;
    cout << "Printing size of class if there is string : " << sizeof(Test) << endl;
}
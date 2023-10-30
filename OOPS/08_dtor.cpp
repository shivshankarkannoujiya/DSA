#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    int password;

public:
    string name;
    int age;
    int id;
    int *v;

    // default ctor
    Student()
    {
        cout << "Student default ctor called..." << endl;
    }

    // parameterized ctor
    Student(string name, int age, int id, int password)
    {
        cout << "Parameterized ctor called..." << endl;
        this->name = name;
        this->age = age;
        this->id = id;
        this->password = password;
        this->v = new int(10); // allocating at heap have to delete otherwise memory leak hoga : location to delete --> dtor
    }

    // default dtor
    ~Student()
    {
        cout << "Student dtor called..." << endl;
        delete v;
    }
};

int main()
{

    // creating object
    Student s1("Abhi", 20, 1, 1241);
    cout << s1.name << endl;

    // if we keep in a scope
    // {
    //     Student s1("Abhi", 20, 1, 1241);
    //     cout << s1.name << endl;
    // } // dtor call hoga
    // Student s2;

    return 0;
    // dtor call hoga
}
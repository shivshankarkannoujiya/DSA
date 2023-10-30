#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    int pass;

public:
    string name;
    int age;
    int id;
    int noS;

    // default ctor
    Student()
    {
        cout << "Default ctor called..." << endl;
    }

    // ctor
    Student(string name, int age, int id, int noS, int pass)
    {
        this->name = name;
        this->age = age;
        this->id = id;
        this->noS = noS;
        this->pass = pass;

        cout << "Parameterized ctor called...." << endl;
    }

    // Copy ctor
    Student(const Student &srcobj)
    {

        cout << "Student copy ctor called..." << endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->id = srcobj.id;
        this->noS = srcobj.noS;
        this->pass = srcobj.pass;
    }

    void Study()
    {
        cout << "Studying" << endl;
    }
};

int main()
{
    // copy ctor

    Student s1("ChhotaBheem", 12, 1, 5, 123);
    // Student s2 = s1; // default ctor nhi call hoga
    // Student s2;
    // s2 = s1; // call hoga default ctor

    // After writting own copy ctor
    // Student s2;
    // s2 = s1; // copy ctor call nhi hoga

    // to call copy ctor we have 2 method
    // Student s2 = s1; // or
    Student s2(s1);
    cout << s1.name << endl;
    cout << s2.name << endl;
}
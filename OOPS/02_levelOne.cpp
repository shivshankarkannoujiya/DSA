#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    string gfname;

public:
    int id;
    int age;
    bool present;
    string name;
    int noS;

    // constructor
    // default constructor : Assigns garbage value
    Student()
    {

        cout << "Student ctor is called" << endl;
    }

    // creating parameterized constructor

    // Student(int _id, int _age, bool _present, string _name, int _noS, string _gfname)
    // {

    //     id = _id;
    //     age = _age;
    //     present = _present;
    //     name = _name;
    //     noS = _noS;
    //     gfname = _gfname;

    //     cout << "Parameterized constructor called" << endl;
    // }

    // using same varibale name
    Student(int id, int age, bool present, string name, int noS, string gfname)
    {

        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->noS = noS;
        this->gfname = gfname;
    }

    void study()
    {
        cout << "Studying" << endl;
    }

private:
    void chat()
    {
        cout << "Chatting" << endl;
    }
};

int main()
{
    Student s1;
    // cout << s1.age << endl; // garbage value assigned by Default Ctor
    //  s1.name = "Raju";
    //  s1.age = 18;
    //  s1.id = 1;
    //  s1.noS = 5;
    //  s1.present = 0;

    Student s2(1, 12, 0, "Raj", 5, "Pink"); // Parameterized ctor will called
    cout << "Name is : " << s2.name << endl;
    cout << "Age is : " << s2.age << endl;
    cout << "id is :" << s2.id << endl;
    cout << "isPresent : " << s2.present << endl;
    cout << "NoS  is : " << s2.noS << endl;

    // Allocating in heap
    Student *s3 = new Student(2, 23, 1, "Raju", 5, "Anki");
    // Accessing dataMember
    cout << s3->age << endl;
    cout << (*s3).age << endl;

    delete s3; // NO Leak

    // Student s2;
    // s2.name = "Rajan";
    // s2.age = 28;
    // s2.id = 2;
    // s2.noS = 5;
    // s2.present = 1;
}
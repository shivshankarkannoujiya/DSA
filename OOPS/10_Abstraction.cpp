#include <bits/stdc++.h>
using namespace std;

// Encapsulation : hide some part and show essential parts
class Student
{

private:
    string gf;

public:
    string name;
    int age;
    int rollno;

    // ctor
    Student(string name, int age, int rollno, string gf)
    {

        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->gf = gf;
        cout << "Ctor is called..." << endl;
    }

    void study()
    {
        cout << "Studying" << endl;
    }

    void eat()
    {
        cout << "Eating" << endl;
    }

    // dtor
    ~Student()
    {
        cout << "Dtor is called..." << endl;
    }

private:
    void chatting()
    {
        cout << "Chatting with gf" << endl;
    }

    void cheating()
    {
        cout << "Cheating in class" << endl;
    }
};

int main()
{
    Student s1("chhotabheem", 12, 1, "chutki");
    return 0;
}
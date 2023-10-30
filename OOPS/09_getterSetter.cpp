#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    string gf;

public:
    string name;
    int age;
    int id;

    // ctor
    Student(string name, int age, int id, string gf)
    {

        this->name = name;
        this->age = age;
        this->id = id;
        this->gf = gf;
    }

    // getter
    string getGfName()
    {
        return gf;
        // return this->gf; same
    }

    // setter
    void setGfName(string gf)
    {
        this->gf = gf;
    }

    void study()
    {
        cout << "Studying" << endl;
    }

private:
    void chatting()
    {
        cout << "Messaging to hi gf" << endl;
    }
};

int main()
{
    Student s1("chhotabheem", 12, 1, "chutki");
    cout << "Name is : " << s1.name << endl;
    cout << "GF name is : " << s1.getGfName() << endl;

    // changing the gfname
    s1.setGfName("Indumati");
    cout << "New gfName is : " << s1.getGfName();

        return 0;
}
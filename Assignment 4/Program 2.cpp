#include<iostream>
using namespace std;

class Subject
{
public:
    int sub_code;
    string sub_name;

    Subject(int c,string n)
    {
        sub_code = c;
        sub_name = n;
    }
    virtual void show() = 0;
};

class Department
{
public:
    string dep_name, tic_name;
    Department(string dn, string tn)
    {
        dep_name = dn;
        tic_name = tn;
    }
    virtual void display()  = 0;
};

class Student : public Subject, public Department
{
public:
    int roll;
    string name;
    Student(int c, string n, string dn, string tn, int r, string sn) : Subject(c,n), Department(dn,tn)
    {
        roll = r;
        name = sn;
    }
    void show()
    {
        cout << "Name = " << name << endl;
        cout << "Roll = " << roll << endl;
        cout << "Sub Name = " << sub_name << endl;
        cout << "Sub Code = " << sub_code << endl;
    }
    void display()
    {
        cout << "Department = " << dep_name << endl;
        cout << "TIC Name = " << tic_name << endl;
    }
};

int main()
{
    Student stud(594,"CPP","IT","CP",6,"Aurghyadip");
    stud.show();
    stud.display();
    return 0;
}

/*
OUTPUT:
Name = Aurghyadip
Roll = 6
Sub Name = CPP
Sub Code = 594
Department = IT
TIC Name = CP
*/

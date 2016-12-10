#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    Employee(string n, int a)
    {
        name = n;
        age = a;
    }
    virtual void show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Manager : public Employee
{
public:
    string dept;
    int salary;
    Manager (string n, int a, string d, int s) : Employee(n,a)
    {
        dept = d;
        salary = s;
    }
    void show()
    {
        cout << "Dept : " << dept << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Labour : public Employee
{
public:
    int days_work;
    int daily_wage;
    Labour (string n, int a, int dwrk, int dwge) : Employee(n,a)
    {
        days_work = dwrk;
        daily_wage = dwge;
    }
    void show()
    {
        cout << "Days Work = " << days_work << endl;
        cout << "Daily Wage = " << daily_wage << endl;
    }
};

int main()
{
    int age, dwr, dwg, salary;
    string name, dept;
    Employee *x,*y;
    cout << "Enter name of the Manager : ";
    cin >> name;
    cout << "Enter age of the manager : ";
    cin >> age;
    cout << "Enter Manager's Dept : ";
    cin >> dept;
    cout << "Enter Manager's salary : ";
    cin >> salary;
    Manager m(name, age, dept, salary);
    x = &m;
    x->Employee::show();
    m.show();
    cout << "Enter name of the Labour : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter labour's days of work : ";
    cin >> dwr;
    cout << "Enter labour's daily wage : ";
    cin >> dwg;
    Labour l(name,age,dwr,dwg);
    y=&l;
    y->Employee::show();
    l.show();
    return 0;
}

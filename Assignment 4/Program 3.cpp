#include<iostream>
using namespace std;

class Vehicle
{
public:
    string car_type;
    int wheels;
    Vehicle(string ct, int w)
    {
        car_type = ct;
        wheels = w;
    }
    ~Vehicle()
    {
        cout << "Destructor Leaving Earth!!!" << endl;
    }
};
class Car : public Vehicle
{
public:
    int no_of_seat, engine_power;
    Car(string ct, int w, int n, int p) : Vehicle(ct,w)
    {
        no_of_seat = n;
        engine_power = p;
    }
    ~Car()
    {
        cout << "Destroying Car!!!" << endl;
    }
};
class Maruti : public Car
{
public:
    int model_no, year_of_making;
    Maruti(string ct, int w, int n, int p, int m, int y) : Car(ct,w,n,p)
    {
        model_no = m;
        year_of_making = y;
    }
    void show()
    {
        cout << "Car Type = " << car_type << endl;
        cout << "Wheels = " << wheels << endl;
        cout << "Number of Seats = " << no_of_seat << endl;
        cout << "Engine Power = " << engine_power << endl;
        cout << "Model Number = " << model_no << endl;
        cout << "Year of Making = " << year_of_making << endl;
    }
    ~Maruti()
    {
        cout << "Burning Maruti!!" << endl;
    }
};

int main()
{
    Maruti m("Sedan",4,5,1400,12345,2002);
    m.show();
    return 0;
}

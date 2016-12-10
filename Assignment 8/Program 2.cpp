#include<iostream>
#include<cmath>
using namespace std;

template<class Tri>
float triarea(Tri x, Tri y, Tri z)
{
    float area;
    float p = (x+y+z)/2;
    area = sqrt(p*(p-x)*(p-y)*(p-z));
    return area;
}

template<class T>
void calArea(T x)
{
    cout <<"The area of the circle is "<< 3.14*x*x << endl;
}
template<class T1, class T2>
void calArea(T1 x, T2 y)
{
    cout << "The area of the rectangle is " << x*y << endl;
}
template<class S1, class S2, class S3>
void calArea(S1 x, S2 y, S3 z)
{
    cout << "The area of the triangle is " << triarea(x,y,z) << endl;
}

int main()
{
    double c;
    int rt1,rt2;
    float x,y,z;
    cout << "Enter the radius of the circle:";
    cin >> c;
    calArea(c);
    cout << "Enter the sides of the triangle:";
    cin >> x >> y >> z;
    calArea(x,y,z);
    cout << "Enter the sides of the rectangle:";
    cin >> rt1 >> rt2;
    calArea(rt1,rt2);
    return 0;
}

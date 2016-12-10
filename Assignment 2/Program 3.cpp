#include<iostream>
using namespace std;
void area(int s)
{
    int area;
    area=s*s;
    cout<<"\nArea of square is:"<<' '<<area<<endl;
}
void area(double a,double b)
{
    float area;
    area=a*b;
    cout<<"\nArea of rectangle is:"<<' '<<area<<endl;
}
void area(double r)
{
    float area;
    area=(3.14*r*r);
    cout<<"\nArea of circle is:"<<' '<<area<<endl;
}

int main()
{
    int s;
    double a,b,r;
    cout<<"Enter side of square:";
    cin>>s;
    area(s);
    cout<<"\nEnter length & breadth of rectangle:";
    cin>>a>>b;
    area(a,b);
    cout<<"\nEnter radius of circle:";
    cin>>r;
    area(r);
}
/*
Output :
Enter side of square:4

Area of square is: 16

Enter length & breadth of rectangle:12 3

Area of rectangle is: 36

Enter radius of circle:3

Area of circle is: 28.26
*/

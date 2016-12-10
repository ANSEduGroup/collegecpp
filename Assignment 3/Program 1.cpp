#include<iostream>
using namespace std;

//Room class
class Room
{
    int height,width,length,area,vol;
public:
    Room(int h,int w,int l);
    void calArea();
    void calVol();
    Room(Room &);
    void compArea(Room &ob);
    ~Room();
};

Room::Room(int h,int w,int l)
{
    cout<<"\nConstructor called!!"<<endl;
    height=h;
    width=w;
    length=l;
}

Room::Room(Room &ob)
{
    cout<<"\nCopy constructor was called here!!"<<endl;
    height=ob.height;
    width=ob.width;
    length=ob.length;
}

Room::~Room()
{
    cout<<"Destructor called!Destroying things!"<<endl;
}

void Room::calArea()
{
    area=(2*(length*width)+(width*height)+(height*length));
    cout<<"Area is : "<<area<<endl;
}

void Room::calVol()
{
    vol=length*width*height;
    cout<<"Volume is : "<<vol<<endl;
}

void Room::compArea(Room &obj)
{
    if(obj.area>area)
    {
        cout << endl;
        cout<<obj.area<<" is larger than "<<area<<endl;
    }
    else if(obj.area<area)
    {
        cout <<endl;
        cout<<area<<" is larger than "<<obj.area<<endl;
    }
    else
        cout<<"\nBoth of the areas are same."<<endl;
}

//driver function
int main()
{
    int h,w,l,h0,w0,l0;
    cout<<"Enter Hight, Width and Length of Room1:\n";
    cin>>h>>w>>l;
    Room r(h,w,l);
    r.calArea();
    r.calVol();
    cout<<"\nEnter Hight, Width and Length of Room2:\n";
    cin>>h0>>w0>>l0;
    Room r1(h0,w0,l0);
    r1.calArea();
    r1.calVol();
    r.compArea(r1);
    Room r2(r);
    r2.calArea();
    r2.calVol();
    r.compArea(r2);
    return 0;
}
/*OUTPUT:
Enter Hight, Width and Length of Room1:
9
5
12

Constructor called!!
Area is : 273
Volume is : 540

Enter Hight, Width and Length of Room2:
6
15
13

Constructor called!!
Area is : 558
Volume is : 1170

558 is larger than 273

Copy constructor was called here!!
Area is : 273
Volume is : 540

Both of the areas are same.
Destructor called!Destroying things!
Destructor called!Destroying things!
Destructor called!Destroying things!
*/

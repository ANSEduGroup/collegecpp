#include<iostream>
using namespace std;

class Volume
{
public:
   float calvol(int r,int h)
   {
      return ((3.14*r*r*h)/3);
   }
   float calvol(float r)
   {
      return ((4*3.14*r*r*r)/3);
   }
   float calvol(float r,float  h)
   {
      return ((3.14*r*r*h));
   }
   float calvol(int a)
   {
      return ((a*a*a));
   }
};

//driver function
int main()
{
   Volume* vol1=new Volume;
   int r1,h1,x;
   float r2,r3,h2;
   cout<<"Enter parameters for cone:";
   cin>>r1>>h1;
   cout<<"Volume is :"<<(*vol1).calvol(r1,h1);
   cout<<"\nEnter parameters for sphere:";
   cin>>r2;
   cout<<"Volume is:"<<(*vol1).calvol(r2);
   cout<<"\nEnter parameters for cylinder:";
   cin>>r3>>h2;
   cout<<"Volume is:"<<(*vol1).calvol(r2,h2);
   cout<<"\nEnter parameters for cube:";
   cin>>x;
   cout<<"Volume is:"<<(*vol1).calvol(x);
}

/*
Output:
Enter parameters for cone:12 3
Volume is :452.16
Enter parameters for sphere:9
Volume is:3052.08
Enter parameters for cylinder:11 2
Volume is:508.68
Enter parameters for cube:3
Volume is:27
*/

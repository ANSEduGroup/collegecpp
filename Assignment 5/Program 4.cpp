#include<iostream>
using namespace std;
class B;
class A
{
   int a;
public:
   A(int x)
   {
      a=x;
   }
   friend int operator+(A ob,B obj);
};
class B
{
   int b;
public:
   B(int y)
   {
      b=y;
   }
   friend int operator+(A ob,B obj)
   {
      int s;
      s=ob.a+obj.b;
      return s;
   }
};
main()
{
   A ob1(10),ob2(9);
   B obj(2);
   cout<<"Addition of diff.class's object are:"<<ob1+obj<<' '<<ob2+obj;
   return 0;
}

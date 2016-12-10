#include<iostream>
using namespace std;
class overlod
{
   int a;
public:
   void input()
   {
      cout<<"Enter a: ";
      cin>>a;
   }
   void operator ++()
   {
      a=a+1;
   }
   void operator  ++(int)
   {
      a=a+1;
   }
   void operator --()
   {
      a=a-1;
   }
   void operator --(int)
   {
      a=a-1;
   }
   void display()
   {
      cout<<"Value of a is: "<<a<<endl;
   }
};
int main()
{
   overlod a1;
   a1.input();
   a1.display();
   cout<<"After pre increment ";
   ++a1;
   a1.display();
   cout<<"After post increment ";
   a1++;
   a1.display();
   cout<<"After pre decrement ";
   --a1;
   a1.display();
   cout<<"After post decrement ";
   a1--;
   a1.display();
}

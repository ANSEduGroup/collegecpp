#include<iostream>
#include<cstring>
using namespace std;
class math
{
   float a;
public:
   void showchoice()
   {
      cout<<"Enter the no. :"<<endl;
      cin>>a;
   }
   void display()
   {
      cout<<"Result is: "<<a<<endl;
   }
   math operator+(math b)
   {
      math c;
      c.a=a+b.a;
      return c;
   }
   math operator-(math b)
   {
      math c;
      c.a=a-b.a;
      return c;
   }
   math operator*(math b)
   {
      math c;
      c.a=a*b.a;
      return c;
   }
   math operator/(math b)
   {
      math c;
      c.a=a/b.a;
      return c;
   }
};
main()
{
   int ch;
   math a,b,c;
   do
   {
      cout<<"\n1.Addition 2.Substraction";
      cout<<" 3.Mulitplication 4.Division 5.Exit\n";
      cout<<"\nEnter the choice :";
      cin>>ch;
      switch(ch)
      {
      case 1:
         cout<<"Enter the first no:"<<endl;
         a.showchoice();
         cout<<"Enter the second no. :"<<endl;
         b.showchoice();
         c=a+b;
         cout<<"\n\nAFTER ADDITION OF TWO OBJECTS";
         c.display();
         break;
      case 2:
         cout<<"Enter the first no:"<<endl;
         a.showchoice();
         cout<<"Enter the second no. :"<<endl;
         b.showchoice();
         c=a-b;
         cout<<"\n\nAFTER SUBTRACTION OF TWO OBJECTS";
         c.display();
         break;
      case 3:
         cout<<"Enter the first no:"<<endl;
         a.showchoice();
         cout<<"Enter the second no. :"<<endl;
         b.showchoice();
         c=a*b;
         cout<<"\n\nAFTER MULTIPLICATION OF TWO OBJECTS";
         c.display();
         break;
      case 4:
         cout<<"Enter the first no:"<<endl;
         a.showchoice();
         cout<<"Enter the second no. :"<<endl;
         b.showchoice();
         c=a/b;
         cout<<"\n\nAFTER Division OF TWO OBJECTS";
         c.display();
         break;
      }
   }
   while(ch!=5);
}

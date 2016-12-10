#include<iostream>
using namespace std;
void num(int x)
{
   try
   {
      if(x==0)
         throw 'P';
      else if(x>0)
         throw 'q';
      else
         throw 'r';
   }
   catch(...)
   {
       cout << "Exception Caught!!" << endl;
   }
}
int main()
{
    num(0);
    num(1);
    num(-1);
    return 0;
}

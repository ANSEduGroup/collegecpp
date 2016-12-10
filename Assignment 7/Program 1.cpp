#include<iostream>
using namespace std;
int main()
{
   int n,p;
   cout << "Enter the size of the array : ";
   cin >> n;
   int a[n];
   cout << "Enter the position you want to access : ";
input:
   cin >> p;
   try
   {
      if( p<0 || p>n )
         throw "Array index out of bound.";
   }
   catch(const char* msg)
   {
      cerr << msg << endl;
      cout << "Enter the position you want to access : ";
      goto input;
   }
   cout << "Enter the value : ";
ipt:
    cin >> a[p];
    try
    {
        if(a[p]>100)
            throw "Greater than 100 not accepted.";
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
        cout << "Enter the value : ";
        goto ipt;
    }
   return 0;
}

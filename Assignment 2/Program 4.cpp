#include<iostream>
using namespace std;
void zero_small(int &a, int &b)
{
   if(a>b)
      b=0;
   else if(b>a)
      a=0;
   cout << "a:"<<' '<<a<<' '<<"and"<<' '<<"b:"<<' '<<b;
}
int main()
{
   int a,b;
   cout << "Enter the value of A:";
   cin >> a;
   cout << "Enter the value of B:";
   cin >> b;
   zero_small(a,b);
}
/*
Output:
Enter the value of A:62
Enter the value of B:8
a: 62 and b: 0
*/

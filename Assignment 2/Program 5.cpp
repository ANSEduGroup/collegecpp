#include<iostream>
using namespace std;
void sum(int a)
{
    a=a+1;
    cout<<"Sum is: "<<a<<endl;
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    cout<<"Sum is: "<<c<<endl;
}
int main()
{
    int a,b;
    void (*fp1)(int);
    void (*fp2)(int,int);
    fp1=&sum;
    fp2=&sum;
    cout<<"Enter the value of A :";
    cin>>a;
    fp1(a);
    cout<<"Enter the value of B :";
    cin>>b;
    fp2(a,b);
}
/*
Output:
Enter the value of A :12
Sum is: 13
Enter the value of B :14
Sum is: 26
*/

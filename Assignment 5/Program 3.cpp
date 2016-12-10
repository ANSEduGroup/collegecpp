#include<iostream>
using namespace std;
class abc
{
  int a,b;
  public:
  abc(){}
  void input()
  {
      cout<<"\nEnter values:";
      cin>>a>>b;
  }
  void show()
  {
      cout<<"\n a= "<<a<<"b= "<<b<<endl;
  }
  abc(abc &obj)
  {
      cout<<"\nCopy constructor\n";
      a=obj.a;
      b=obj.b;
  }
  abc operator=(abc obj)
  {
      cout<<"\nAssignment operator\n";
      a=obj.a;
      b=obj.b;
      return (*this);
  }
};
int main()
{
    abc obj1,obj2;
    obj1.input();
    abc obj3(obj1);
    obj3.show();
    obj2=obj1;
    obj2.show();
    return 0;
}

#include<iostream>
using namespace std;
template<class X>
class Stack
{
    X data[10];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(X a)
    {
        data[++top]=a;
    }
    X pop()
    {
        return data[top--];
    }
};
main()
{
    Stack<int> ob;
    ob.push(5);
    ob.push(7);
    cout<<"Poped element is:"<<ob.pop()<<endl;
    Stack<float> obj;
    obj.push(2.11);
    obj.push(3.61);
    cout<<"Poped element is:"<<obj.pop()<<endl;
}

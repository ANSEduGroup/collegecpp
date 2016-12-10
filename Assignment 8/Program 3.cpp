#include<iostream>
#define MAX 50
using namespace std;
template <class X>
class Q
{
   X qa[MAX];
   int front,rear;
public:
   Q()
   {
      front=rear=-1;
   }
   void inet(X ch);
   X delet();
};
template <class X> void Q <X>::inet(X item)
{
   if (rear>=MAX)
   {
      cout << "Q is full\n";
      return;
   }
   if(front==-1)
      front++;
   qa[++rear] = item;
}
template <class X>X Q<X>::delet()
{
   X val;
   if((front==-1)||(front>rear))
   {
      cout << "Q is empty\n";
      return 0;
   }
   val= qa[front];
   front++;
   return val;
}
int main()
{
   Q <int> a;
   Q <char> b;
   Q <double> c;
   int n;
   int x;
   char y;
   double z;

   //Integer QUEUE
   cout << "INTEGER QUEUE" << endl;
   cout << "How many elements do you want to enter : ";
   cin >> n;
   cout << "Enter the elements of integer queue : ";
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      a.inet(x);
   }
   cout << "Delete from Q of integers: "<<endl;
   for(int i = 0; i < n; i++)
      cout << "Deleting : " << a.delet() << endl;

   //Character Queue
   cout << "CHARACTER QUEUE" << endl;
   cout << "How many elements do you want to enter : ";
   cin >> n;
   cout << "Enter the elements of character queue : ";
   for (int i = 0; i < n; i++)
   {
      cin >> y;
      b.inet(y);
   }
   cout << "Delete from Q of characters: "<<endl;
   for(int i = 0; i < n; i++)
      cout << "Deleting : " << b.delet() << endl;

   //Double Queue
   cout << "DOUBLE QUEUE" << endl;
   cout << "How many elements do you want to enter : ";
   cin >> n;
   cout << "Enter the elements of double queue : ";
   for (int i = 0; i < n; i++)
   {
      cin >> z;
      c.inet(z);
   }
   cout << "Delete from Q of characters: "<<endl;
   for (int i = 0; i < n; i++)
      cout << "Deleting : " << c.delet() << endl;
   return 0;
}

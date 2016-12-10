#include<iostream>
using namespace std;
class student
{
   int rno;
public:
   void getnumber()
   {
      cout<<"Enter Roll No:";
      cin>>rno;
   }
   void putnumber()
   {
      cout<<"\n\n\tRoll No:"<<rno<<"\n";
   }
};

class test:virtual public student
{

public:
   int sem1,sem2;
   void getmarks()
   {
      cout<<"Enter Marks\n";
      cout<<"Sem 1:";
      cin>>sem1;
      cout<<"Sem 2:";
      cin>>sem2;
   }
   void putmarks()
   {
      cout<<"\tMarks Obtained\n";
      cout<<"\n\tSem 1: "<<sem1;
      cout<<"\n\tSem 2: "<<sem2;
   }
};

class LabPerf:public virtual student
{

public:
   int perf;
   void getPerf()
   {
      cout<<"Enter Lab Marks:";
      cin>>perf;
   }
   void putPerf()
   {
      cout<<"\n\tLab Marks is:"<<perf;
   }
};

class result:public test,public LabPerf
{
   int total;
public:
   void display()
   {
      total=sem1+sem2+perf;
      putnumber();
      putmarks();
      putPerf();
      cout<<"\n\tTotal Score:"<<total;
   }
};

int main()
{
   result obj;
   obj.getnumber();
   obj.getmarks();
   obj.getPerf();
   obj.display();
   return 0;
}

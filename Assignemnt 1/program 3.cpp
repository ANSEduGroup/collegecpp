#include<iostream>
using namespace std;

//student data class
struct StudData
{
    int roll;
    char name[20];
    int marks;
};

//driver function
int main()
{
    StudData *s[3], st[3];
    for (int i = 0; i<3; i++)
    {
        s[i]=&st[i];
    }
    for (int i = 0; i <3 ; i++)
    {
        cout << "Enter the name of the Student " << i+1 << " : ";
        cin >> (*s[i]).name;
        cout << "Enter the roll of the student " << i+1 << " : ";
        cin >> (*s[i]).roll;
        cout << "Enter the marks of the student " << i+1 << " : ";
        cin >> (*s[i]).marks;
    }
    if( (*s[0]).marks>=(*s[1]).marks && (*s[0]).marks>=(*s[2]).marks )
        cout << (*s[0]).name <<" has the highest marks.";

    if( (*s[1]).marks>=(*s[0]).marks && (*s[1]).marks>=(*s[2]).marks )
        cout << (*s[1]).name <<" has the highest marks.";

    if( (*s[2]).marks >= (*s[0]).marks && (*s[2]).marks >=(*s[1]).marks )
        cout << (*s[2]).name <<" has the highest marks.";
    return 0;
}

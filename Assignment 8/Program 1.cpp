#include <iostream>
#include <string>

using namespace std;
template <class type> type show(type a)
{
    cout << a << endl;
}
int main()
{
    cout << "Enter int : " ;
    int a;
    cin >> a;
    cout << "Enter string : ";
    string b;
    cin >> b;
    show(a);
    show(b);
    return 0;
}

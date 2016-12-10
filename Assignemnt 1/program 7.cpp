#include<iostream>
using namespace std;

int main()
{
    float net = 5689.2356;
    cout << "Employee's net pay is : ";
    cout.precision(2);
    cout.setf(ios::fixed|ios::showpoint);
    cout << net << endl;
    return 0;
}

/* Write a program which accept temperature in Fahrenheit and
   print it in centigrage using funct. Using function call by
   value.
*/

#include<iostream>
using namespace std;

void tempconvert(double f)
{
    double centi;
    centi = (((f-32)*5)/9);
    cout << "Temperature in Centigrade = " << centi;
}

//driver function
int main()
{
    double fahr;
    cout << "Enter temperature in Fahrenheit = ";
    cin >> fahr;
    tempconvert(fahr);
    return 0;
}

#include<iostream>
using namespace std;

float division(float num, float den)
{
    if(den == 0)
        throw "Division by ZERO not allowed.";
    else
        return (num/den);
}

int main()
{
    float a,b,res;
    cout << "Enter Dividend : ";
    cin >> a;
    input:
        cout << "Enter Divisor : ";
        cin >> b;
        try
        {
            res = division(a,b);
        }catch(const char* msg)
        {
            cerr << msg << endl;
            goto input;
        }
    cout << "The result is " << res;
    return 0;
}

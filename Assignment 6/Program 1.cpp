#include<iostream>
using namespace std;

int gcd(int m, int n)
{
    int t;

    while (m > 0)
    {
        t = m;
        m = n % m;
        n = t;
    }

    return n;
}

class Fraction
{
public:
    int num, den;
    Fraction(int x, int y)
    {
        try
        {
            if(x == 0 || y == 0)
            {
                throw "Zero input detected, please correct inputs.";
            }
            else
            {
                num = x;
                den = y;
            }
        }
        catch(const char* msg)
        {
            int n1;
            int n2;
            cerr << msg << endl;
            cin >> n1;
            cin >> n2;
            num = n1;
            den = n2;
        }
    }
    Fraction()
    {
        num = 1;
        den = 1;
    }
    friend void show(Fraction fr);
    friend Fraction reduce(Fraction f);
};

//Overloading
Fraction operator+(Fraction f1, Fraction f2)
{
    Fraction r; // declaring a new Fraction to hold the result

    // loading result Fraction with sum of adjusted numerators
    r.num = (f1.num*f2.den) + (f2.num*f1.den);

    // loading result with the common denominator
    r.den = f1.den * f2.den;

    return r;  // returning the result Fraction
}
//Subtraction of two fractions
Fraction operator-(Fraction f1, Fraction f2)
{
    Fraction r; // declaring a new Fraction to hold the result

    // loading result Fraction with sum of adjusted numerators
    r.num = (f1.num*f2.den) - (f2.num*f1.den);

    // loading result with the common denominator
    r.den = f1.den * f2.den;

    return r;  // returning the result Fraction
}
//Multiplication of two fractions
Fraction operator*(Fraction f1, Fraction f2)
{
    Fraction r; // declaring a new Fraction to hold the result

    // loading result Fraction with multiplied numerator
    r.num = f1.num * f2.num;

    // loading result with the multiplied denominator
    r.den = f1.den * f2.den;

    return r;  // returning the result Fraction
}

//reducing via friend function
Fraction reduce(Fraction f)
{
    int m, n, t;
    m = f.num;
    n = f.den;
    t = gcd(m,n);
    f.num = f.num/t;
    f.den = f.den/t;
    return f;
}

//Display function
void show(Fraction fr)
{
    Fraction frc;
    //check for special cases
    if(fr.num==fr.den)
        cout << "1" << endl;
    else if(fr.num==0)
        cout << "0" << endl;
    else
    {
        cout << fr.num << "/" << fr.den << endl;
        if(gcd(fr.num,fr.den)!=1) //if gcd =1, no need to reduce the fraction
        {
            frc = reduce(fr); // reducing the fraction if gcd !=1 and showing the result
            cout << "Reduced to : ";
            cout << frc.num << "/" << frc.den << endl;
        }
    }
}

//driver function
int main()
{
    Fraction f3;
    int x,y;
    char choice;
    cout << "Enter the first fraction : " ;
    cin >> x >> y;
    Fraction f1(x,y);
    cout << "Enter the second function : " ;
    cin >> x >> y;
    Fraction f2(x,y);
    cout << "\n::SUM::" << endl;
    f3 = f1 + f2;
    show(f3);
    cout << "\n::SUB::" << endl;
    f3 = f1 - f2;
    show(f3);
    cout << "\n::MUL::" << endl;
    f3 = f1 * f2;
    show(f3);
    return 0;
}

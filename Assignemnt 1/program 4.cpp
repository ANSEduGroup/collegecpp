#include<iostream>
using namespace std;

//complex number structure
struct Cmplx
{
    float real;
    float img;
};

//complex add function
void cmplxAdd(Cmplx &c1, Cmplx &c2)
{
    float rsum, isum;
    rsum = c1.real + c2.real;
    isum = c1.img + c2.img;
    cout << "Result = " << endl;
    cout << rsum << " + " << isum << "i";
}

//driver function
int main()
{
    Cmplx cm1, cm2;
    cout << "Enter real and imaginary part of the 1st number: ";
    cin >> cm1.real >> cm1.img;
    cout << "Enter real and imaginary part of the second number: ";
    cin >> cm2.real >> cm2.img;
    cmplxAdd(cm1, cm2);
    return 0;
}

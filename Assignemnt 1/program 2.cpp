// Write a program using structure to take input
// length in feet and inch. Find sum of two lengths.
// Using function where pass the structure as argument
// through the function

#include<iostream>
using namespace std;

// structure of the length variables

struct Length
{
    double inch;
    double feet;
};

// function for sum of the lengths inside the structure

void lengthSum (Length l1)
{
    double sum;
    sum = ((l1.inch)/12) + (l1.feet);
    cout << "Sum in inch = " << sum*12 << endl;
    cout << "Sum in feet = " << sum << endl;
}

//driver function

int main()
{
    Length l;
    cout << "Enter length in inch = ";
    cin >> l.inch;
    cout << "Enter length in feet = ";
    cin >> l.feet;
    lengthSum (l);
    return 0;
}

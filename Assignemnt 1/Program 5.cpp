#include<iostream>
using namespace std;

int main()
{
	int d,y,m;
	cout << "Enter the number of days : ";
	cin >> d;
	y = d/365;
	d = d%365;
	m = d/30;
	d=d%30;
	if( y != 0 )
        cout << y <<  " Year(s) ";
    if ( m != 0 )
        cout  << m << " Month(s) ";
    if ( d != 0 )
        cout << d << " Day(s) ";
    cout << endl;
	return 0;
}

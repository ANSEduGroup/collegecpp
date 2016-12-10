#include<iostream>
using namespace std;
int **a,**b;
int m,n;
int main()
{
    int i,j;
    cout<<"No. of Rows and Columns: ";
    cin>>m>>n;
    a=new int *[m];
    for(i=0; i<m; i++)
        a[i]=new int[n];
    cout<<"Enter elements:\n";
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            cin>>a[i][j];
    b=new int *[n];
    for(i=0; i<n; i++)
        b[i]=new int[m];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            b[j][i]=a[i][j];
    cout<<"Transpose:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout<<b[i][j]<<" ";
        cout<<"\n";
    }
}
/*
Output:
No. of Rows and Columns: 3 3
Enter elements:
1 2 3
4 5 6
7 8 9
Transpose:
1 4 7
2 5 8
3 6 9
*/

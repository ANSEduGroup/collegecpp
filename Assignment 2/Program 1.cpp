#include<iostream>
using namespace std;

int main()
{
   int *ptr;
   int i,j,n,k;
   cout<<"Enter the size:";
   cin>>n;
   ptr = new int(n);
   cout<<"\nEnter array elements:";
   for(i=0; i<n; i++)
   {
      cin>>*(ptr+i);
   }
   cout<<"\n::Array before sorting is::\n";
   for(i=0; i<n; i++)
   {
      cout<<" "<<*(ptr+i);
   }
   for(i=0; i<n; i++)
   {
      for(j=0; j<n-i-1; j++)
      {
         if(*(ptr+j)>*(ptr+j+1))
         {
            k=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=k;
         }
      }
   }
   cout<<"\n::Array after sorting::\n";
   for(i=0; i<n; i++)
      cout<<" "<<*(ptr+i);
   return 0;
}
/*
Output:
Enter the size:6

Enter array elements:6 1 8 3 4 59

::Array before sorting is::
 6 1 8 3 4 59
::Array after sorting::
 1 3 4 6 8 59
 */

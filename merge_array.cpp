#include <iostream.h>
#include<conio.h>
void main()
{
   int j,i,n1,n2,a[50],b[50],c[100];
   clrscr();
   cout << "Enter the size of 1st array : " << endl;
   cin>>n1;
   for(i=0;i<n1;i++)
   {
    cout<<"Enter element "<<i+1<<" for first array"<<" : "<<endl;
    cin>>a[i];

   }

   cout << "Enter the size of 2nd array : " << endl;
   cin>>n2;
   for(i=0;i<n2;i++)
   {
    cout<<"Enter element "<<i+1<<" for second array"<<" : "<<endl;
    cin>>b[i];

   }

   for(i=0;i<n1;i++)
   {
       c[i] = a[i];
   }


   for(j=0;j<n2;i++,j++)
   {
       c[i] = b[j];
   }

    cout<<"the merged array is "<<endl;
    for(i=0;i<n1+n2;i++)
   {
       cout<<c[i]<<endl;
   }

   getch();
}


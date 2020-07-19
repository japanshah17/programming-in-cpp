#include <iostream>
using namespace std;

int main()
{
   int j,i,n,arr[5];
   cout << "Enter the size of array : " << endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
    cout<<"Enter element "<<i+1<<" : "<<endl;   
    cin>>arr[i];
       
   }
   
    cout << "the array is : " << endl;
    for(i=0;i<n;i++)
   {
    cout<<arr[i]<<endl;   
   }
   
    cout << "the reversed array is : " << endl;
    for(j=n-1;j>=0;j--)
   {
    cout<<arr[j]<<endl;   
   }
  
   return 0;
}


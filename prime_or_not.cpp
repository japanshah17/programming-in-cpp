#include <iostream>

using namespace std;

int main()
{
    int n,count=0,i;
    cout<<"enter a number to check:"<<endl;
    cin>>n;
    if(n==0 || n==1 || n<0)
    {
        cout<<"you have enterd 0 or 1 or negetive number"<<endl;
    }
    else
    {
     for(i=2;i<=n;i++)
     {
         if(n%i==0)
         {
             count++;
             
         }
     
     }
     if(count==1)
     {
         cout<<"It is prime"<<endl;
     }
     else 
     {
         cout<<"It is composite"<<endl;
     }
    } 
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n,ans=1;
    cout << "Enter a number to find facrorial"<<endl;
    cin>>n;
    while(n>=1)
    {
        ans = ans*n;
        n--;
    }
    cout <<"facorial is " <<ans<<endl; 
    
   return 0;
}


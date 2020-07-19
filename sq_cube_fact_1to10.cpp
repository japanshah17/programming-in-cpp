#include <iostream>
#define sq i*i
#define cube i*i*i
using namespace std;

int fact(int n)
{
    int ans=1;
    while(n>=1)
    {
        ans = ans*n;
        n--;
    }
    return ans;
}

int main()
{
    for(int i=1;i<=10;i++)
    {
        cout<<"square,cube and factorial for "<<i<<" is : "<<sq<<","<<cube<<" and "<<fact(i)<<endl<<endl;
    }

    return 0;
}


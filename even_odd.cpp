#include <iostream>
using namespace std;

int even_odd(int n)
{
    if(n%2==0)
    {
        cout<<"The number is even";
    }
    else
    {
        cout<<"The number is odd";
    }
}
int main()
{
    int n;
    cout<<"Enter a number to check : "<<endl;;
    cin>>n;
    
    even_odd(n);
    return 0;
}


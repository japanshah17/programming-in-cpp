#include <iostream>
using namespace std;

class myclass
{
	public:
		
	double factorial(int n)
{
    double ans=1;
    while(n>=1)
    {
        ans = ans*n;
        n--;
    }
    return ans;
}

int square(int n)
{
	return n*n;
}

int cube(int n)
{
	return n*n*n;
}

};
int main()
{
	myclass a1;
	int i,s,c,f;
    for(int i=1;i<=10;i++)
    {
    	s=a1.square(i);
    	c=a1.cube(i);
    	f=a1.factorial(i);
        cout<<"square,cube and factorial for "<<i<<" is : "<<s<<","<<c<<" and "<<f<<endl;
    }

    return 0;
}


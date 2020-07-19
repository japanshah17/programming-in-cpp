#include <iostream>

using namespace std;

int power(int base,int exp)
{
	int result=1;

        while (exp != 0) {
        result *= base;
        exp--;
    }

    return result;
    
}

int main()
{
	
    int d,n,len,i=0,a;
    cout<<"enter a number to check:"<<endl;
    cin>>n;
    int temp;
    temp = n;
    cout<<"enter the length of a number:"<<endl;
    cin>>len;
    while(n!=0)
    {
    	d = n%10;
    	i = i+power(d,len);
    	n = n/10;
	}
	if(temp == i)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not armstrong";

	}
	    return 0;
}


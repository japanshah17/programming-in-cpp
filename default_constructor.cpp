#include<iostream>
using namespace std;
class constructor
{
	int a,b;
	
	public:
		constructor();		
};
constructor::constructor()
{
cout<<"constructor called";	
}
int main()
{
	constructor m;	
	return 0;
}

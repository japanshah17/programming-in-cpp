#include<iostream>
using namespace std;
class constructor
{
	int a,b;
	
	public:
		constructor()
		{
			cout<<"base class constructor called"<<endl;	
		}	
};
class Child : public constructor
{
	public:
	Child()
	{
		cout<<"child class constructor called"<<endl;
	}
};
int main()
{
	constructor m;
	Child j;
	return 0;
}

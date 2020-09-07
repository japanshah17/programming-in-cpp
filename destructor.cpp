#include<iostream>
using namespace std;
class constructor
{
	int a;
	public:
		constructor()
		{
			cout<<"constructor called"<<endl;	
		}
		int add()
		{
			a=1+2;
		}
		void print()
		{
			cout<<a<<endl;
		}
		~constructor()
		{
			cout<<"destructor called"<<endl;	
		}	
};

int main()
{
	constructor m;	
	m.add();
	m.print();
	return 0;
}

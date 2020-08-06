#include <iostream>
#include <string>
using namespace std;

class constructor
{
	string a,b,c;
	
	public:
		constructor(string x)
		{
			a = x;
		}
		constructor(string y , string z)
		{
			b = y;
			c = z;
		}
		void print()
			{
				cout<<"a is "<<a<<" b is "<<b<<" and c is "<<c<<endl;
			}
			
		
};

int main()
{
	constructor m("language c++");
	m = constructor("language java","language vb");
	m.print();

	
	return 0;
}

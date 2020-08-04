#include<iostream>
using namespace std;

class constructor
{
	int a,b;
	
	public:
		constructor(int x, int y)
		{
			a = x;
			b = y;
		}
		void print()
			{
				cout<<"a is "<<a<<" b is "<<b;
			}
			
		
};

int main()
{
	int a,b;
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
	constructor m(a,b);
	m.print();

	
	return 0;
}

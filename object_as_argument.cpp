#include <iostream>
using namespace std;

class add
{
	private:
		int a;

	public:
		void set(int x)
		{
			a = x;
		}

		void sum(add ob1, add ob2)
		{
			a  = ob1.a + ob2.a;
		}

		void print()
		{
			cout<<"Value of A :  "<<a<<endl;
		}
};

int main()
{
	//object declarations
	add d1;
	add d2;
	add d3;

	//assigning values to the data member of objects
	d1.set(10); 
	d2.set(20); 

	//passing object d1 and d2
	d3.sum(d1,d2);
	
	//printing the values
	d1.print();
	d2.print();
	d3.print();

	return 0;
}


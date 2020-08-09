#include<iostream>
using namespace std;
class A
{
	public:
		void print()	
		{
			cout<<"print base A"<<endl;	
		}
};
class B
{
		public:
		void print()	
		{
			cout<<"print base B"<<endl;	
		}
};
class AB : public A,public B
{
	public:
		void print()	
		{
			cout<<"print derived"<<endl;	
			A::print();
			B::print();
		}
};
int main()
{

	AB ab;
	ab.print();	
	return 0;
}

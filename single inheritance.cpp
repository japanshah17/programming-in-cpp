#include<iostream>
using namespace std;
class A
{
	public:
		int value;
		void print()	
		{
			cout<<"print base A"<<endl;	
		}
	protected:
		int j;
};
class B : public A
{
		public:
		void print()	
		{
			A::print();	
			cout<<"print derived B"<<endl;
		}
};
int main()
{
	B obj;
	obj.print();
	return 0;
}

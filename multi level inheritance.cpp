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
class C : public B
{
		public:
		void print()	
		{
			A::print();	
			B::print();
			cout<<"print derived C"<<endl;
		}
};

int main()
{
	C obj;
	obj.print();	
	return 0;
}

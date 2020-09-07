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
class B : public A
{
		public:
		void print()	
		{
			cout<<"print B"<<endl;	
		}
};
class C : public A
{
	public:
		void print()	
		{
			cout<<"print C"<<endl;	
		}
};
int main()
{

	B ob;
	C oc;
	ob.print();
	oc.print();	
	return 0;
}

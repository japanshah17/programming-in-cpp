#include<iostream>
using namespace std;
class A
{
	protected: 
		int val;
};
class A1 : virtual public A //hierarchical inheritance
{
	public:
		A1()
		{
			val = 1;
		}
			show()
		{
			cout<<"the value in A1 is "<<val;
		}
	
	
};
class A2 : virtual public A //hierarchical inheritance
{
	public:
		A2()
		{
			val = 2;	
		}
		show()
		{
			cout<<"the value in A2 is "<<val;
		}

};
class A1A2 :  public A2,public A1 // multiple inheritance
{
	public:
		void show()
		{
			cout<<"the value is "<<val;
			
		}
		
};
int main()
{
	A1A2 g;
	g.show();
	return 0;
}

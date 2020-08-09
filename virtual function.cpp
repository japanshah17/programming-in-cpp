#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()	
		{
			cout<<"print base"<<endl;	
		}
		void show()
		{
			cout<<"show base"<<endl;
		}
};
class derived : public base
{
	public:
		void print()	
		{
			cout<<"print derived"<<endl;	
		}
		void show()
		{
			cout<<"show derived"<<endl;
		}
	
};
int main()
{
	base *b;
	derived o;
	b=&o;
	b->print();
	b->show(); 	
	return 0;
}

#include<iostream>
using namespace std;
class animals
{
	public:
	virtual void speak() = 0;
};
class dogs : public animals
{
	public:
	void speak()
	{
		cout<<"barking dogs:"<<endl;
	}
};
class lions : public animals
{
	public:
	void speak()
	{
		cout<<"roaring lions:"<<endl;	
	}	
};
int main()
{
	dogs dog;
	lions lion;
	dog.speak();
	lion.speak();
	return 0;
}

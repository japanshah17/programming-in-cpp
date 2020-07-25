#include<iostream>
using namespace std;
int main()
{
	int *p
	p = new int;
	*p = 5;
	cout<<"the data is: "<<*p<<endl<<"add is: "<<p<<endl;//prints 5 and some address
	delete p;//deletes the value of variable allocated dynamically
	cout<<"the data is: "<<*p<<endl<<"add is: "<<p<<endl;	//prints garbage value and some address
}

#include<iostream>
using namespace std;
class base
{
	protected
		int a,b;
	public:
		int c,d;
};
//class base2
//{
//	int b;
//	public:
//		int e;
//};
//class base3
//{
//	int c;
//	public:
//		int d;
//};
class child : public base
{

};
class child2 : protected base
{

};
class child3 : private base3
{

};
int main()
{
	return 0;
}

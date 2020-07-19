#include<iostream>
using namespace std;

int main()
{
enum days
	{
		sun,
		mon,
		tue = 5,
		wed = 0
	};
	cout<<sun<<endl<<mon<<endl<<tue<<endl<<wed;
}

#include<iostream>
using namespace std;
#define PI 3.14

float area(int h, int b)
{
	float a;
	a = 0.5 * (h*b);
	return a;
}

float area(int r)
{
	float a;
	a= PI*r*r;
	return a;
}

void area(int l,int b,int a)
{
	a = l*b;
	cout<<a<<endl;
}

int main()
{
	int height,base,radius,length,breadth;
	int ans=0;
	
	
	cout<<"Enter height and base of triangle ::"<<endl;
	cin>>height;
	cin>>base;
	
	
	cout<<"Enter radius of cirlce ::"<<endl;
	cin>>radius;
	
	
	cout<<"Enter length and breadth of rectangle ::"<<endl;
	cin>>length;
	cin>>breadth;
	
	
	cout<<"area of triangle = "<<area(height,base)<<endl;
	
	cout<<"area of circle = "<<area(radius)<<endl;
	
	cout<<"area of rectangle = ";
	area(length,breadth,ans);
	
	
	return 0;
}

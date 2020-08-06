#include<iostream>
#include<conio.h>
using namespace std;
float cir(float, const float pi=3.142);
int main()
{
float r,area;
cout<<"Enter the radius"<<endl;
cin>>r;
area=cir(r);
cout<<"Area of circle is "<<area;
return 0;
}

float cir(float r,float pi)
{
float ar;
ar=pi*r*r;
return(ar);
}

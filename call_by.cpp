#include<iostream>
#include<conio.h>

using namespace std;
void swap(int a, int b) //value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a in swapping by value : "<<a<<endl;
    cout<<"Value of b in swapping by value : "<<b<<endl<<endl;
}

void exchange(int &a, int &b) //refrence
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a in swapping by refrence : "<<a<<endl;
    cout<<"Value of b in swapping by refrence : "<<b<<endl<<endl;
}


int main()
{
    int a = 100, b = 200;
    cout<<"Value of a before swapping by value : "<<a<<endl;
    cout<<"Value of b before swapping by value : "<<b<<endl<<endl;
    swap(a, b);  // passing value to function
    cout<<"Value of a after swapping by value : "<<a<<endl;
    cout<<"Value of b after swapping by value : "<<b<<endl<<endl;
    exchange(a,b);
    cout<<"Value of a after swapping by refrence : "<<a<<endl;
    cout<<"Value of b after swapping by refrence : "<<b<<endl<<endl;
    getch();
    return 0;
}

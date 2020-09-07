#include <iostream>  
using namespace std;  
class B;  
class A  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void max(A,B);         
};  
class B  
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void max(A,B);                  
};  
void max(A a,B b)  
{  

    if(a.x<=b.y)  
    cout << a.x <<" is greater"<<endl;  
    else  
    cout << b.y <<" is greater" << endl;  
}  
   int main()  
{  
   A a;  
   B b;  
   a.setdata(10);  
   b.setdata(20);  
   max(a,b);  
    return 0;  
 }  

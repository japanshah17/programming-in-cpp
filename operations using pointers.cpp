#include <iostream>
using namespace std;

class A{
	public:
		void add(int a , int b){
			int c;
			c = a+b;
			cout<<"addition of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
		void mul(int a , int b){
			int c;
			c = a*b;
			cout<<"multiplication of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
		void sub(int a , int b){
			int c;
			c = a-b;
			cout<<"subtraction of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
		void div(int a , int b){
			int c;
			c = a/b;
			cout<<"division of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
		void mod(int a , int b){
			int c;
			c = a%b;
			cout<<"mod of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
};
int main (){
   A *obj;
   (*obj).add(6,7);
   (*obj).mul(7,7);
   (*obj).div(25,5);
   (*obj).sub(15,5);
   (*obj).mod(4,2);
   return 0;
}

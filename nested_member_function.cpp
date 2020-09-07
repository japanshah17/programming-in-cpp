#include<iostream>
using namespace std;

class numbers
{
 private:
 void display(int ans)
 {
	cout<<"the sum is "<<ans;	
 }	
 public:
 void getnumbers()
 {
 	int arr[5];
 	for(int i=0;i<5;i++)
 	{
 		cout<<"Enter the number"<<i+1<<":"<<endl;
 		cin>>arr[i];
    } 
    int sum(int arr[5]);
    {
	 	int sum=0;
	 	for(int i=0;i<5;i++)
	 	{
	 	sum=sum+arr[i];
		}
		display(sum);
	}	
 }
};
int main()
{
numbers n1;
n1.getnumbers();
}

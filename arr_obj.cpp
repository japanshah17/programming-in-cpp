#include <iostream>
#include <string>
using namespace std;

class student
{
  
    public:
    string name;
    int roll_no;
    int sem;
    string branch;
    
    void getdata()
    {
    	cout<<"Name:";
    	cin>>this->name;
    	cout<<"Roll no:";
		cin>>this->roll_no;
		cout<<"Sem:";
		cin>>this->sem;
		cout<<"Branch:";
		cin>>this->branch;
	}
    void printdata()
    {
        cout<<"Name is : "<<this->name<<endl<<"Roll number is : "<<this->roll_no<<endl<<"Sem is : "
		<<this->sem<<endl<<"Branch is : "<<this->branch<<endl;
    }
};
int main()
{
    student s[3];
    int i;

	for(i=0;i<3;i++)
	{
		cout<<"enter details for "<<i+1<<endl;
		s[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		cout<<"the details for "<<i+1<<" are as follow"<<endl;
		s[i].printdata();
	}
	

    return 0;
}


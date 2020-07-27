21) Write a program to demonstrate static data member and static member function.
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
    static int SID;
    void printdata()
    {
    	cout<<"name is : "<<this->name<<endl<<"roll numbers is : "<<this->roll_no<<endl<<"sem is : "<<this->sem<<endl<<"branch is : "<<this->branch;
    }
    static int SID_COUNT()
    {
    	return SID++;
	}
};
int student :: SID = 1;
int main()
{

	student s1,s2;
    s1.name = "Japan";
    s1.roll_no = 134;
    s1.sem = 3;
    s1.branch = "Computer";
    s1.printdata();
	cout<<endl<<"the count is "<<student::SID_COUNT()<<endl;
	s2.name = "Karan";
    s2.roll_no = 053;
    s2.sem = 7;
    s2.branch = "Computer";
    s2.printdata();
    cout<<endl<<"Now the count is "<<student::SID_COUNT();
	return 0;
}


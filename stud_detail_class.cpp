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
        void printdata()
    {
        	cout<<"name is : "<<this->name<<endl<<"roll numbers is : "<<this->roll_no<<endl<<"sem is : "<<this->sem<<endl<<"branch is : "<<this->branch;
    }
};
int main()
{
    student s1;
    s1.name = "Japan";
    s1.roll_no = 134;
    s1.sem = 3;
    s1.branch = "Computer";
    s1.printdata();
    
    return 0;
}


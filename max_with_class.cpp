#include<iostream>

using namespace std;
class largest
{
    public:
	int first,second,third;
	void setdata()
	{
		cout<<"enter three numbers to check"<<endl;
		cin>>this->first>>this->second>>this->third;
	}

	int max()
	{
        int m;	
		if(first>=second)
		{
			if(first>=third)
			{
				m = first;
			}
			 else
			{
				m = third;
			}

		}
		else if(second>=first)
		{
			if(second>=third)
			{
				m = second;
			}
			 else
			{
				m = third;
			}
			
		}
		return m;
	}
	void printdata()
	{
		int abc;
		abc = max();
		cout<<abc<<" is max "<<endl;
		
	}	
	
};
int main()
{
	largest o1;
	o1.setdata();
	o1.printdata();
	
	return 0;
}

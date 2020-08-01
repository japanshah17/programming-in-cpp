#include <iostream>
#include <string>
using namespace std;


class time
{
	private:
		int h;
		int m;
		void seth(int x)
		{
			h = x;
		}
		void setm(int y)
		{
			m = y;
		}
	public:
		time addtime(time c)
		{
			time temp;
			cout<<"enter hour:"<<endl;
			cin>>c.h;
			cout<<"enter minutes:"<<endl;
			cin>>c.m;
			temp.seth(c.h);
			temp.setm(c.m);
			return temp;
			
		}
		
		
		void print()
		{
			cout<< h<<" hours and "<<m<<" minutes "<<endl;
		}
};

int main()
{
	time d1,d2;
	d2=d1.addtime(d1);
	d2.print();
	return 0;
}


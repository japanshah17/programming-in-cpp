
#include <string>
using namespace std;

class item
{
  
    public:
    int quantity;
    int cost;
    
    void getdata(int n)
    {
     
        cout<<"Enter quantity for item "<<n<<" : ";
        cin>>quantity;
        cout<<"Enter cost for item " <<n<<" : ";
        cin>>cost;
	}
     
    void printdata(int n)
    {
     
      	cout<<"quantity for item is "<<n<<" : "<<this->quantity<<endl<<endl;
        cout<<"cost for item is "<<n<<" : "<<this->cost<<endl<<endl;
  
	  
    
    }
};
int main()
{
    item i1,i2,i3;
    
    i1.getdata(1);
	i2.getdata(2);
	i3.getdata(3);
	
	i1.printdata(1);
	i2.printdata(2);
	i3.printdata(3);
  
    return 0;
}


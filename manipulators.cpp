#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
    cout << "Hello" <<  endl << "World!"<<endl;


    long double pi = 3.141592653589793239;
    cout << "default precision (6): " << pi << '\n'<< " setprecision(10): " <<  setprecision(10) << pi << '\n';
    
    

 cout << "no setw:" << 42 << '\n'<< "setw(6):" <<  setw(6) << 42 << '\n'<< "setw(6), several elements: " << 89 <<  setw(6) << 12 << 34 << '\n';


     cout <<  setfill('0') <<  setw(10); 
     cout << 134 <<  endl; 
     string str = "Japan"; 
     cout <<  left <<  setfill('0') <<  setw(10); 
     cout << str <<  endl; 
     
     
    return 0; 
}

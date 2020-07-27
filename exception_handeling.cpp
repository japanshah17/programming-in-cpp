#include <iostream> 
using namespace std; 
int main() 
{ 
int x = -1; 
try
{ 
	if (x < 0) 
	{ 
		throw x; 
		cout << "After throw (Never executed) \n"; 
	} 
} 
catch (int a) 
{ 
	cout <<x<<" is exeption"<<endl; 
} 
//if (x < 0) 
//	{ 
//	cout <<x<<" is exeption"<<endl; 
//    }
return 0; 
} 


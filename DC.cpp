#include <iostream> 
using namespace std; 

class geeks { 
	const char* p; 

public: 
	// default constructor 
	geeks(char *j) 
	{ 

		// allocating memory at run time 
		p = new char; 
		p = j; 
	} 

	void display() 
	{ 
		cout << p << endl; 
	} 
}; 

int main() 
{ 
	geeks obj("japan"); 
	obj.display(); 
} 


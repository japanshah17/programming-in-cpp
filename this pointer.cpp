#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;   
       string name;
       float salary;  
       Employee(int id, string name)    
        {    
            this->id = id;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo");
    Employee e2=Employee(102, "Nakul");
    e1.display();    
    e2.display();    
    return 0;  
}

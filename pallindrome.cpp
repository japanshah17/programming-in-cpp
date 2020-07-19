#include <iostream>
using namespace std;

int main()
{
   int n,r,rn=0,temp;
   cout << "Enter a number to check:" << endl;
   cin>>n;
   temp = n;
   while(n != 0)
   {
       r = n%10;
       rn = (rn*10)+r;
       n = n/10;
   }
   cout<<"revese is "<<rn<<endl;
  if(temp == rn)
  {
      cout<<"it's palindrome"<<endl;
  }
  else
  {
      cout<<"it's not palindrome"<<endl;
  }
   return 0;
}


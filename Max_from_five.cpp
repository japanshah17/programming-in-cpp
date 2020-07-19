#include <iostream>
using namespace std;
int main()
{
int a[5], max,min;
cout << "Enter 5 numbers\n";
for (int i = 0; i<5; i++)
{
cin >> a[i];
}
max = a[0];
for (int i = 0; i < 5; i++)
{
if (a[i] > max)
{
max = a[i];
}
}
cout << "\nGreatest number is: " << max<<endl;

min = a[0];
for (int i = 0; i < 5; i++)
{
if (a[i] < min)
{
min = a[i];
}
}
cout << "smallest number is: " << min<<endl;
return 0;
}


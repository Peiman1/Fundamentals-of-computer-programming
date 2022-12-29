#include <iostream>
using namespace std;
int main()
{
 int a,b,temp;
 cout<<"\nEnter two numbers:";
 cin>>a>>b;
 while(true)
 {
  if (b==0)
  break;
  temp=a%b;
  a=b;
  b=temp;
 }
 cout<<"The GCD is:"<<a;
 return 0;
}


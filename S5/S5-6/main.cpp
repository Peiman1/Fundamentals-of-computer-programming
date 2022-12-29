#include <iostream>
using namespace std;
bool prime(int n);
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;

if (!prime(num)){
    cout<<"\nNot a prime number !";}
    else {cout<<"\nIs a prime number !";}
    cout<<"\nPrime numbers less than or equal to "<<num<<" : ";

    for(int i = 1; i <= num; i++)
    {
        if(prime(i))
            cout <<i << " ";
    }
return 0;
}

bool prime(int n)
{
    if(n == 1 || n == 0)
        return false;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
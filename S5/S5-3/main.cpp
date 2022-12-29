#include <iostream>
using namespace std;
int main()
{
    double n,num,max=0,min=0;
    cout<<"\nEnter the number of students:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter the grades :";
        cin>>num;
        if(i==0)
            min=num;

        if(num>max)
            max=num;

        if(num<=min)
            min=num;
    }
    cout<<"\nThe Result is:"<<endl;
    cout<<"\nMax:"<<'\t'<<max<<'\t';
    cout<<"\nMin:"<<'\t'<<min<<'\t';
    cout<<"\nAverage:"<<'\t'<<(max+min)/2.0<<'\t';
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.14159265;
int main() {
    double n;
    double answer;
    double inter,radinter;
    cout<<"\nEnter the n : ";
    cin>>n;
    inter=((2*n)+(1.0/3))*PI;
    radinter=sqrt(inter);
            answer=pow(n,n)*pow((1.000/2.718),n)*radinter;
            cout<<"\n"<<n<<"! equals approximately "<<answer;
    return 0;
}

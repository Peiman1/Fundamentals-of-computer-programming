#include <iostream>
#include <cmath>
using namespace std;
const float G=32.17;
void rocket(double ,double ,double );
int main() {
    double theta,distance,velocity;
    cout<<"\nEnter the angle of elevation (Theta) : ";
    cin>>theta;
    cout<<"\nEnter the velocity : ";
    cin>>velocity;
    cout<<"\nEnter the Distance to target : ";
    cin>>distance;
    rocket(theta,velocity,distance);
    return 0;
}
void rocket(double theta ,double velocity,double distance){
    double time;
    double height;
   time=distance/(velocity*cos(theta));
           cout<<"\nThe time is : "<<time;
    height=(velocity*sin(theta)*time)-(G*(time*(exp(2))/2));
           cout<<"\nThe height is : "<<height;
}
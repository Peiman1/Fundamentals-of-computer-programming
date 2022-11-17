#include <iostream>
using namespace std;
void volume( int, int, int);
void surface( int, int, int);
int main() {
int a,b,c;
      cout<<"\nEnter the a : ";
      cin>>a;
      cout<<"\nEnter the b : ";
      cin>>b;
      cout<<"\nEnter the c : ";
      cin>>c;
      volume(a,b,c);
      surface(a,b,c);
    return 0;
}
void volume(int a,int b,int c){

   cout<<"\nThe volume is ; "<<a*b*c;
}
void surface(int a, int b,int c){
    int area=(a*b*2)+(a*c*2)+(b*c*2);
    cout<<"\nThe surface area is :"<<area;
}
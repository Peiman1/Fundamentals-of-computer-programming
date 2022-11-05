#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double gpa, dec, integer;
  cout<<"\nEnter Your GPA : ";
  cin>>gpa;
  integer= floor(gpa);
  dec=gpa-integer;
  cout<<"\nInteger Part is : " <<integer;
  cout<<"\nDecimal Part is : " <<dec;

    return 0;
}

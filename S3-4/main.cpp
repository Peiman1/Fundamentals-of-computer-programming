#include <iostream>
using namespace std;
void all_costs();
int main() {

all_costs();

    return 0;
}
void all_costs(){
    int init_cost,fuel;
    double tax_rate;
    cout<<"\nEnter the init house Cost : ";
    cin>>init_cost;
    cout<<"\nEnter the Annual Fuel Cost : ";
    cin>>fuel;
    cout<<"\nEnter the Tax rate : ";
    cin>>tax_rate;

    double AC;
    AC=init_cost+(fuel*5)+((tax_rate*init_cost)*5);
    cout<<"\nThis house costs :"<< AC <<" in 5 years.";


}

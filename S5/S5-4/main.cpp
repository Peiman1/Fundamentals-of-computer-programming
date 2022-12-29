#include <iostream>
using namespace std;
int main() {
    double grades[5];
    double sum;
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter the grades :";
        cin >> grades[i];

         if(grades[i]<=11.75 && grades[i]>=0){
             cout<<"Not Good!";
             c++;
         }
         else if(grades[i]<=17.75 && grades[i]>=12){
             cout<<"Good!";
             b++;
         }
         else if(grades[i]<=20 && grades[i]>=18){
             cout<<"Great!";
             a++;
         }
         else cout<<"Enter a valid grade from 0-20 :";
                          }
        for (int i = 0; i < 5; i++)
            sum = sum + grades[i];
        cout << "\nThe average is : " << sum / 5;
        cout << "\nThe amount of greats : " << a;
        cout << "\nThe amount of goods : " << b;
        cout << "\nThe amount of Not Goods! : " << c;
        return 0;
    }

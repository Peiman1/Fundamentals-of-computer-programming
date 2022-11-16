#include <iostream>
#include <string>
using namespace std;
int main() {
   string words;
   string w1,w2,w3,w4;
   int stars_pos;
   void tell();
   cout<<"\nEnter the 4 words : ";
    getline(cin,words,'\n');
    cout<<words;
    stars_pos=words.find("*");

        w1.assign(words,0,stars_pos);
        cout<<"\nFirst: "<<w1;
        words.erase(0,stars_pos+1);
    stars_pos=words.find("*");

        w2.assign(words,0,stars_pos);
        cout<<"\nSecond: "<<w2;
        words.erase(0,stars_pos+1);
    stars_pos=words.find("*");

        w3.assign(words,0,stars_pos);
        cout<<"\nThird: "<<w3;
        words.erase(0,stars_pos+1);
    stars_pos=words.find("*");

        w4.assign(words,0);
        cout<<"\nForth: "<<w4;
    words=w1+" "+w2+" "+w3+" "+w4;
    cout<<"\nV.1 is : "<<words;
    cout<<"\nV.2 is : "<<w4+" "+w3+" "+w2+" "+w1;


           return 0;
}

#include<iostream>
#include<string>
using namespace std;
void removeVowels (string);
int main()
{
    string one[3];
    for(int i=0;i<3;i++){
    cout<<"\nEnter your word:";
    cin>>one[i];
 removeVowels(one[i]);}
 return 0;
}
void removeVowels (string one)
{
    cout <<"\nThe output would be :";
string a = "aeiouAEIOU";

for (int i = 0; i < one.length(); i++)
  {
for(int j = 0; j < a.length(); j++)
     {
if(one[i] == a[j])
        {
one.erase(one.begin() + i);
        }
     }
  }
cout <<"\n"<<one;
}

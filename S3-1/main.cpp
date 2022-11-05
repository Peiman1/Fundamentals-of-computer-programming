#include <iostream>
using namespace std;

  void drawcircle();
  void drawrectangle();
  void drawtriangle();
  void displaytwoblanklines();

    int main() {
        drawcircle();
        drawtriangle();
        drawrectangle();
        displaytwoblanklines();
        drawtriangle();
        drawcircle();
        drawrectangle();
    return 0;
}
void drawcircle()
{
    cout<<"\n      *  *      ";
    cout<<"\n   *        *   ";
    cout<<"\n  *          *  ";
    cout<<"\n  *          *  ";
    cout<<"\n   *        *   ";
    cout<<"\n      *  *      ";

    }
void drawrectangle(){
    cout<<"\n ************** ";
    cout<<"\n *            * ";
    cout<<"\n *            * ";
    cout<<"\n ************** ";
    }
void drawtriangle(){
    cout<<"\n      /\\        ";
    cout<<"\n     /  \\       ";
    cout<<"\n    /    \\      ";
    cout<<"\n   /______\\     ";
    }
    void displaytwoblanklines(){
        cout<<"\n                 ";
        cout<<"\n                 ";
    }
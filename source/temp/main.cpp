//#include "main.h"
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    int w, h, side, r;
    string menu;
    while(true){ //Infinite loop.
        cout << "Enter (R)ectangle, (T)riangle, (C)ircle, or (E)nd.\n";
        cin >> menu;
        while (menu.length()>1){
            cerr << "ERROR. Input invalid.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this resets the stream.
            cout << "Enter (R)ectangle, (T)riangle, (C)ircle, or (E)nd.\n";
            cin >> menu;
        }
        if (menu[0] == 'R' || menu[0] == 'r'){
            cerr << "How wide do you want your rectangular frame to be?\n";
            cin >> w;
            while (cin.fail()==true){
                cerr << "ERROR. Input invalid.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this resets the stream.
                cerr << "How wide do you want your rectangular frame to be?\n";
                cin >> w;
            }
            cout << "How tall do you want your rectangular frame to be?\n"; 
            cin >> h;
            while (cin.fail()==true){
                cerr << "ERROR. Input invalid.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this resets the stream.
                cout << "How tall do you want your rectangular frame to be?\n"; 
                cin >> h;
            }
            rectangle(w, h);
        }
        else if (menu[0] == 'T' || menu[0] == 't'){
            cerr << "This program will draw a triangle constituting the northwestern half of a square.\n"<< "Please enter the side lenght you wish for the triangle:\n";
            cin >> side;
            while (cin.fail()==true){
                cout << "ERROR. Input invalid.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this resets the stream.
                cerr << "This program will draw a triangle constituting the northwestern half of a square.\n"<< "Please enter the side lenght you wish for the triangle:\n";
                cin >> side;
            }             
            triangle(side);
        }
        else if (menu[0] == 'C' || menu[0] == 'c'){
            cerr << "What radius would you like your circle to be?\n";
            cin >> r;
            while (cin.fail()==true){
                cerr << "ERROR. Input invalid.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this resets the stream.
                cerr << "What radius would you like your circle to be?\n";
                cin >> r;
            }
            circle(r);
        }
        else if (menu[0] == 'E' || menu[0] == 'e'){
            return 0; //ends program
        }
        else{
        cerr << "ERROR. Input invalid.\n";
        }
    }
}

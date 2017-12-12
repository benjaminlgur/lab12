/*
  Author: <Benjamin Gur>
  Course: {136}
  Instructor: <Prof. Pajela>
  Assignment: <Lab12>

  This program will draw a shape based on the option chosen from a menu by the user. 
*/

#include <iostream>
#include <string>
#include <limits>
using namespace std;

void rectangle(int w, int h);
//precondition: Give hight and width greater then 0
//postcondition: Will draw a rectangle given based on the arguments. 
void triangle(int side);
//precondition: Give a non negetive side length.
//postcondtion: Will draw a triangle base on the arguments.
void circle(int r);
//preconditon: Give a value greater then 0 for radius.
//postcondition: Willd draw a circle based on the arguments.
void drawPixel(char c);
char pixelSelect();

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

void rectangle(int w, int h){
    char c = pixelSelect();
    int count = 0;
    while (count < w){
        drawPixel(c);
        count++;
    }
    cout << endl;
    if (h <=1){
        return; //this is for if the rectangle is only one line high.
    }
    int countTwo = 2; //countTwo = 2 becuse 2 lines will be full of *.
    int countThree = 2; //countThree = 2 becuse there are * on either end.
    while (countTwo < h){ //This while loop loops during the poi
        drawPixel(c);
        countTwo++;
        while (countThree < w){
            cout << " ";
            countThree++;
        }
        drawPixel(c);
        cout << endl;
        countThree = 2; //This resets the above while loop.
    }
    int countFour = 0;
    while (countFour < w){
        drawPixel(c);
        countFour++;
    }
    cout << endl;
    return;
}

void triangle(int side){
    char c = pixelSelect();
    int  count, countTwo;
    count = side;
    countTwo = side;
    while (countTwo > 0){
        while (count > 0){
            drawPixel(c);
            count--;
    }
        cout << endl;
        countTwo--;
        count = countTwo; //Becuse countTwo is decremented in the above line not only does it limit the loop but when count is eqalised to it it make the * per row one less.
    }
    return;
}

void circle(int r){ //I used internet code as I didnt make the circle in lab 4.
    char c = pixelSelect();
    float console_ratio = 4.0/3.0;
    float a = console_ratio*r;
    float b = r;

    for (int y = -r; y <= r; y++)
    {
        for (int x = -console_ratio*r; x <= console_ratio*r; x++)
        {
            float d = (x/a)*(x/a) + (y/b)*(y/b);
            if (d > 0.90 && d < 1.1)
            {
                drawPixel(c);
            }
            else
            {
                 cout << " ";
            }
        }
        cout << endl;
    }
    return;
}

void drawPixel(char c){
    cout << c;
}

char pixelSelect(){
    char c;
    cout << "Choose a charecter you would like to use as a pixel\n";
    cin >> c;
    return c;
} 

/* Test Cases

Inputing letters, symbols, words, sentences , over-flowingly large positive or negative numbers, and decimals for w, h, r, and side all will output a error message clear the stream and allow for reentry.
Imputing characters other than r, t, c, or e will will output a error message and allow for reentry. Inputting words, sentences, or numbers, including decimals will output a error message clear the stream and allow for reentry.  

Tests Tried

Menu input: 
test - leads to error and reentry
65 - leads to error and reentry
.0001 -leads to error and reentry
re - leads to error and reentry //tried this for test of multiple options chossen.
99999999999999999999999999999999999999999999999999 - leads to error and reentry
-9999999999999999999999999999999999999999999999999 - leads to error and reentry
Argument input: // Same results for all imputs of every argument
test - leads to error and reentry
99999999999999999999999999999999999999999999999999 - leads to error and reentry
-9999999999999999999999999999999999999999999999999 -leads to error and reentry
 .005 - leads to error and reentry
 a - leads to error and reentry
 ? - leads to error and reentry*/
